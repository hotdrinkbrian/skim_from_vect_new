import os, sys
sys.path.append('./Tools/')
sys.path.append('./Templates/')
import multiprocessing as mp
import copy
import math
import argparse
from array import array
import pandas as pd
from tools import ptrank, padd
from templates import *
from timeit import default_timer as timer
from ROOT import ROOT, gROOT, TDirectory, TFile, gFile, TBranch, TLeaf, TTree
from ROOT import AddressOf
pwd = os.popen('pwd').read()
pwd = pwd.split('\n')[0]
pl = '.L ' + pwd + '/Objects' + '/Objects_m1.h+'
gROOT.ProcessLine(pl)
from ROOT import JetType, JetTypeSmall, JetTypePFC_fourVect, JetTypePFC_fiveVect, JetTypePFC_sixVect
Js = JetType()







path               = '/beegfs/desy/user/hezhiyua/backed/fromLisa/fromLisaLLP//'
#path              = '/beegfs/desy/user/hezhiyua/backed/dustData/'+'crab_folder_v2/'#'/home/brian/datas/roottest/'
#inName            = 'VBFH_HToSSTobbbb_MH-125_MS-40_ctauS-500_jetOnly.root'

num_of_jets           = 3#1#4
DisplacedJets_Trigger = 0#1
testOn                = 0
nonLeadingJetsOn      = 0#1
nLimit                = 1000000000000#100000#1000000
numOfEntriesToScan    = 100 #only when testOn = 1
NumOfVecEl            = 6
Npfc                  = 40
#scanDepth            = 44
vectName              = 'MatchedCHSJet1' #'Jets'

#adjusted for different oldfile location
#args1       = '/beegfs/desy/user/hezhiyua/2bBacked/skimmed/withNonLeadingJets/'
args1       = '/beegfs/desy/user/hezhiyua/2bBacked/skimmed/withNonLeadingJets/'
versionN_b  = 'TuneCUETP8M1_13TeV-madgraphMLM-pythia8-v1'
versionN_s  = 'TuneCUETP8M1_13TeV-powheg-pythia8_PRIVATE-MC'
HT          = '50'
fn          = ''
newFileName = fn.replace('.root','_skimed.root')
lola_on     = 0 # 1: prepared for lola
ct_dep      = 0 #1 for ct dependence comparison
cut_on      = 1#1
life_time   = ['500'] #['0','0p1','0p05','1','5','10','25','50','100','500','1000','2000','5000','10000']

treeName    = 'tree44'
JetName     = 'Jet1s'


len_of_lt = len(life_time)

pars = argparse.ArgumentParser()
pars.add_argument('--ht'    ,action='store',type=int,help='specify HT of the QCD file')
pars.add_argument('-s'      ,action='store',type=int,help='specify if for VBF file')
pars.add_argument('--model' ,action='store',type=str,help='specify model')
pars.add_argument('-t'      ,action='store',type=int,help='specify if to do test')
pars.add_argument('--mass'  ,action='store',type=int,help='specify signal mass')
pars.add_argument('--nj'  ,action='store',type=int,help='specify number of jets')
args = pars.parse_args()
if args.ht:
    HT = str( args.ht ) 
if args.s:
    ct_dep = args.s
if args.t:
    testOn = 1

if   args.model == 'bdt':
    lola_on    = 0
elif args.model == 'lola5':
    lola_on    = 1
    NumOfVecEl = 5
elif args.model == 'lola6':
    lola_on    = 1
    NumOfVecEl = 6

if args.mass:
    sgn_mass    = args.mass
if args.nj:
    num_of_jets = args.nj
    



forBDT    = structure(model='bdt' , nConstit=num_of_jets, preStr='J'          )
forLola   = structure(model='lola', nConstit=40         , dimOfVect=NumOfVecEl)

forBDT.Objh()
#forLola.Objh()


if   ct_dep == 0:
    matchOn = 0
    if   '50'  == HT:
        channel = {'QCD':'QCD_HT50to100_'  + versionN_b + '.root'}
    elif '100' == HT:
        channel = {'QCD':'QCD_HT100to200_' + versionN_b + '.root'}
    elif '200' == HT:
        channel = {'QCD':'QCD_HT200to300_' + versionN_b + '.root'}
    elif '300' == HT:
        channel = {'QCD':'QCD_HT300to500_' + versionN_b + '.root'}

    elif '500' == HT:
        channel = {'QCD':'QCD_HT500to700_'   + versionN_b + '.root'}
    elif '700' == HT:
        channel = {'QCD':'QCD_HT700to1000_'  + versionN_b + '.root'}
    elif '1000' == HT:
        channel = {'QCD':'QCD_HT1000to1500_' + versionN_b + '.root'}
    elif '1500' == HT:
        channel = {'QCD':'QCD_HT1500to2000_' + versionN_b + '.root'}
    elif '2000' == HT:
        channel = {'QCD':'QCD_HT2000toInf_'  + versionN_b + '.root'}


elif ct_dep == 1:
    matchOn = 1
    channel = {}
    for lt in life_time:
        channel['ct' + lt] = 'VBFH_HToSSTobbbb_MH-125_MS-' + str(sgn_mass) + '_ctauS-' + lt + '_' + versionN_s + '.root'

# Struct
if   lola_on == 0:
    Jets1 = JetTypeSmall() #for bdt: JetTypeSmall; for lola: JetTypePFC_fourVect
elif lola_on == 1:
    if   NumOfVecEl == 5:
        Jets1 = JetTypePFC_fiveVect() 
    elif NumOfVecEl == 6:
        Jets1 = JetTypePFC_sixVect()

#-------------------------------------
cs            = {}
cs['pt_L']    = 'pt'  + '>' + '15'
cs['eta_L']   = 'eta' + '>' + '-2.4' 
cs['eta_U']   = 'eta' + '<' + '2.4'
cs['matched'] = 'isGenMatched' + '==' + '1'
#-------------------------------------
#---------------------------------------------------------------------------------------------------------------------------------
#prs = 'Jet_old_dict[' +str(j+1) + '].'
prs = 'oldTree.Jets[k].' 
a   = ' and '
o   = ' or '
condition_str = '(' + prs + cs['pt_L']  + ')' +\
                a +\
                '(' + prs + cs['eta_L'] + ')' +\
                a +\
                '(' + prs + cs['eta_U'] + ')'
if matchOn == 1:
    condition_str = condition_str +\
                    a +\
                    '(' + prs + cs['matched']  + ')'
if   cut_on == 1:
    print condition_str
elif cut_on == 0:
    print 'no cut applied~'
#---------------------------------------------------------------------------------------------------------------------------------
#######################################
if   nonLeadingJetsOn == 0:
    whichJetStr = 'k==1'
elif nonLeadingJetsOn == 1:
    whichJetStr = 'k>=1'
#######################################
DisplacedJets_Trigger_str = 'oldTree.HLT_VBF_DisplacedJet40_DisplacedTrack_v or oldTree.HLT_VBF_DisplacedJet40_DisplacedTrack_2TrackIP2DSig5_v or oldTree.HLT_HT350_DisplacedDijet40_DisplacedTrack_v or oldTree.HLT_HT350_DisplacedDijet80_DisplacedTrack_v or oldTree.HLT_VBF_DisplacedJet40_VTightID_DisplacedTrack_v or oldTree.HLT_VBF_DisplacedJet40_VVTightID_DisplacedTrack_v or oldTree.HLT_HT350_DisplacedDijet80_Tight_DisplacedTrack_v or oldTree.HLT_VBF_DisplacedJet40_VTightID_Hadronic_v or oldTree.HLT_VBF_DisplacedJet40_VVTightID_Hadronic_v or oldTree.HLT_HT650_DisplacedDijet80_Inclusive_v or oldTree.HLT_HT750_DisplacedDijet80_Inclusive_v'
#######################################



if lola_on == 1:
    inName = channel['ct500']#channel['QCD']#''#[for i in channel: channel[i]][0]

    j1Entry  = []
    j1Num    = [] 
    pan      = []

    f1 = TFile( path + inName , "r" )
    t1 = f1.Get('ntuple/tree')

    NumE = t1.GetEntriesFast()
    print NumE
    t1.SetBranchAddress( vectName , AddressOf(Js, 'pt') )

    b1 = t1.GetBranch('PFCandidates')
    nEntries = b1.GetEntries()


    if testOn == 0: 
        numOfEntriesToScan = nEntries
        if nEntries > 1000000:
            numOfEntriesToScan = 1000000 

    nr = 0
    for entry in t1:
        print '~~~~~~~~~~another entry:' + str(nr)
        b1.GetEntry(nr)
        nr += 1
        #print 'chf:'
        #print Js.chf
        E         = b1.FindBranch('PFCandidates.energy')
        PX        = b1.FindBranch('PFCandidates.px')
        PY        = b1.FindBranch('PFCandidates.py')
        PZ        = b1.FindBranch('PFCandidates.pz')
        C         = b1.FindBranch('PFCandidates.isTrack')
        PID       = b1.FindBranch('PFCandidates.pdgId') #pType
        #M        = b1.FindBranch('PFCandidates.mass')
        jetInd    = b1.FindBranch('PFCandidates.jetIndex')
        j1E       = [] 
        j1PX      = []
        j1PY      = []
        j1PZ      = []
        j1C       = []
        j1PID     = []
        j1M       = [] 
        scanDepth = E.GetNdata()

        for num in range(0,scanDepth):
            if jetInd.GetValue(num,1) == 0:  #0,1
                j1Entry.append(nr) 
                #j1Num.append(num)
                j1E.append(E.GetValue(num,1))
                j1PX.append(PX.GetValue(num,1))
                j1PY.append(PY.GetValue(num,1))
                j1PZ.append(PZ.GetValue(num,1))
                j1C.append( int(C.GetValue(num,1)) ) 
                #print C.GetValue(num,1)
                #print E.GetValue(num,1)
                j1PID.append( int(PID.GetValue(num,1)) )
                #j1M.append(M.GetValue(num,1))
            #if num == 40:
            #    break 
        tempE  , _, _ = ptrank( j1PX, j1PY, j1E   , n_pfc=Npfc)
        tempPX , _, _ = ptrank( j1PX, j1PY, j1PX  , n_pfc=Npfc)
        tempPY , _, _ = ptrank( j1PX, j1PY, j1PY  , n_pfc=Npfc)
        tempPZ , _, _ = ptrank( j1PX, j1PY, j1PZ  , n_pfc=Npfc)
        tempC  , _, _ = ptrank( j1PX, j1PY, j1C   , n_pfc=Npfc) 
        tempPID, _, _ = ptrank( j1PX, j1PY, j1PID , n_pfc=Npfc)
        #tempM, _, _ = ptrank( j1PX, j1PY, j1M , n_pfc=Npfc)
        #print tempN
        #print tempPT
        tE   = padd(tempE  ,  0, Npfc)
        tPX  = padd(tempPX ,  0, Npfc)    
        tPY  = padd(tempPY ,  0, Npfc)
        tPZ  = padd(tempPZ ,  0, Npfc)
        tC   = padd(tempC  , -1, Npfc)
        tPID = padd(tempPID, -1, Npfc)
        #tM  = padd(tempM , 0, Npfc)
    
        if NumOfVecEl == 5:
            tt = [4444]*40*5
            tt[40*0:40*1] = tE 
            tt[40*1:40*2] = tPX 
            tt[40*2:40*3] = tPY  
            tt[40*3:40*4] = tPZ 
            tt[40*4:40*5] = tC 
        elif NumOfVecEl == 6:
            tt = [4444]*40*6
            tt[40*0:40*1] = tE 
            tt[40*1:40*2] = tPX 
            tt[40*2:40*3] = tPY  
            tt[40*3:40*4] = tPZ 
            tt[40*4:40*5] = tC 
            tt[40*5:40*6] = tPID 

        pan.append(tt)
        
        if nr == numOfEntriesToScan:
            break     

    print 'num of entries: ' + str(nEntries)   

    forLola.panColNameListGen()
    colN = forLola.panColNameList


    jet1 = pd.DataFrame(pan, columns=colN)  







#########################
#                       #
#                       #
#      filling          #
#                       #
#                       #
#                       #
#########################

#-----------------------------------------------------------------------------------------------------------
def skim_c( name , newFileName ):
    #--------------------------------
    Jet_old_dict = {}
    #for j in range(num_of_jets):
    #    Jet_old_dict[j+1] = JetType()
    #Jet_old_dict[1] = JetType()
    #--------------------------------
    oldFile = TFile(name, "READ")
    oldTree = oldFile.Get("ntuple/tree") 
    NofEntries = oldTree.GetEntriesFast()
    numOfEntriesToScan_local = NofEntries
    if NofEntries > nLimit:
        numOfEntriesToScan_local = nLimit
    if testOn == 1:
        numOfEntriesToScan_local = numOfEntriesToScan  
    #locate and register the Jet branches of the old ttree
    print 'skimming file',oldFile.GetName(),'\tevents =',oldTree.GetEntries(),'\tweight =',oldTree.GetWeight()
    print 'filename:', name
    newFile = TFile('Skim/' + newFileName, "RECREATE")
    newFile.cd()
    newTree = TTree(treeName, treeName)

    if   lola_on == 0:
        forBDT.branchLeafStrGen()
        newTree.Branch( JetName, Jets1, forBDT.branchLeafStr )


    elif lola_on == 1:
        forLola.branchLeafStrGen() 
        newTree.Branch( JetName, Jets1, forLola.branchLeafStr )



    # this attribute list must exactly match (the order of) the features in the header file!!!! 

    
    
    attr     = forBDT.preList + forBDT.attrTypeList
    attr_out = forLola.attrTypeList
    
    ti = 80000
    #theweight = oldTree.GetWeight() 
    for i in range(  0 , numOfEntriesToScan_local  ):    
        if      i == 0:
            start = timer()
        elif i%ti == 2:
            start = timer()
        
        oldTree.GetEntry(i)
        # selections
        # Trigger
       
        if DisplacedJets_Trigger:
            if not eval( DisplacedJets_Trigger_str ): continue 
 
        #####################################  
        DisplacedJetsTriggerBool = -1.
        if eval( DisplacedJets_Trigger_str ):
            DisplacedJetsTriggerBool = 1.
        else: 
            DisplacedJetsTriggerBool = 0.  
        ##################################### 
        #nCHSJets = -1. 
        #####################################
      
        if lola_on == 0:      
            passB = 0
            for k in xrange( oldTree.Jets.size() ):

                if num_of_jets == 1: 
                    if not eval(whichJetStr): continue
                else:
                    if not (k>=1 and k<=num_of_jets): continue 
                
                if cut_on == 1:                       
                    if not eval( condition_str ): 
                        for stri in attr:
                            strTemp = 'J'+str(k)+''+stri 
                            if   stri == 'eta' or stri == 'phi':
                                dfv = -9.    
                            else:
                                dfv = -1.  
                            setattr( Jets1, strTemp , dfv ) 
                        continue    
                    
                passB = 1 
                for stri in attr:
                    strTemp = 'J'+str(k)+''+stri 
                    if   stri != 'DisplacedJetsTriggerBool':
                        fillingValue = getattr(oldTree.Jets[k],stri) 
                    elif stri == 'DisplacedJetsTriggerBool':
                        fillingValue = DisplacedJetsTriggerBool        
                    setattr( Jets1 , strTemp , fillingValue )                
            if passB == 1:
                newTree.Fill()    

                    
        elif lola_on == 1:
            
            for ii in range(forLola.nConstit):
                for strO in attr_out:
                    tempAttrStrO = 'pfc' + str(ii+1) + '_' + strO
                    tempAttrStrI =  forLola.attrNameDic[strO] + '_' + str(ii+1)
                    setattr( Jets1 , tempAttrStrO , jet1[tempAttrStrI][i] )
            #!!!!!!!!!!!!!!!!!!!!deal with the empty value situation!!!!!!!!!!!!!!!!!!!!!!
            newTree.Fill()


        #########################################################  
        if i%ti == 1 and i>ti: 
            end = timer() 
            dt = end-start
            tl = int( ((numOfEntriesToScan_local-i)/ti ) * dt ) #NofEntries
            if tl > 60:
                sys.stdout.write("\r" + 'time left: ' + str( tl/60 ) + 'min' )
                sys.stdout.flush()
            else: 
                sys.stdout.write("\r" + 'time left: ' + 'less than 1 min')
                sys.stdout.flush() 
        #########################################################

    print 'produced skimmed file',newFile.GetName(),'\tevents =',newTree.GetEntries(),'\tweight =',newTree.GetWeight()
    newFile.cd()
    newFile.Write()
    newFile.Close() 
#-----------------------------------------------------------------------------------------------------------

#-----------===============================
def skim(names): 
    for cc in channel:
        if 'QCD' in channel[cc]:
            nFn = channel[cc].replace('.root','_' + str(num_of_jets) + 'j_skimed.root')
        elif 'ctauS' in channel[cc]:
            nFn = channel[cc].replace('.root','_' + str(num_of_jets) + 'j_skimed.root') #('.root','_4mj_skimed.root')
        ss = path + channel[cc]    
        #skim_c(ss,nFn)
        pi = mp.Process(target=skim_c, args=(ss,nFn))
        pi.start()
#-----------===============================

#=====================================================================================================
os.chdir(args1)
if not os.path.isdir('Skim'): os.mkdir('Skim')

p = mp.Process(target=skim, args=(fn,))
p.start()
#=====================================================================================================








#_____________________________________________old lines:
"""
    for j in range(num_of_jets):
        if 'QCD' in name:
            #oldTree.SetBranchAddress( 'Jets' , AddressOf(Jet_old_dict[j+1], 'pt') )
            #oldTree.SetBranchAddress( 'MatchedCHSJet' + str(j+1) , AddressOf(Jet_old_dict[j+1], 'pt') )
        elif 'ctauS' in name:
            #oldTree.SetBranchAddress( 'MatchedCHSJet' + str(j+1) , AddressOf(Jet_old_dict[j+1], 'pt') )
            #oldTree.SetBranchAddress( 'Jets' , AddressOf(Jet_old_dict[j+1], 'pt') )
""" 

"""
                #~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~nan problem to be solved!      
                FracCal = getattr(oldTree.Jets[k],'FracCal')
                if   FracCal <= 0:
                    setattr( Jets1 , 'FracCal' , 0. )    
                elif FracCal > 400:
                    setattr( Jets1 , 'FracCal' , 400. )
                if   Jets1.FracCal <=  0:
                    Jets1.FracCal    = 0.
                elif Jets1.FracCal > 400:
                    Jets1.FracCal    = 400.
                #~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~nan problem to be solved!
"""


"""
###################################################################################################################
fin = TFile( path + 'VBFH_HToSSTobbbb_MH-125_MS-40_ctauS-500_pfc_jetOnly_bugged.root' , "r" )
tin = fin.Get('ntuple/tree')
print tin
entries = tin.GetEntriesFast()
print entries
for jentry in xrange(entries):
    ientry = tin.GetEntry(jentry)
    for j in xrange(tin.Jets.size()):
        print 'Jets.size: ' + str( tin.Jets.size() )
        print tin.Jets[j].pt
###################################################################################################################
"""
