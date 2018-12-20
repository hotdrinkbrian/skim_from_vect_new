import os, sys
sys.path.append('./Tools/')
sys.path.append('./Templates/')
import multiprocessing as mp
import copy
import math
import argparse
from array import array
from time import time as tm
import root_numpy     as rnp
import numpy          as np
import pandas         as pd
from tools import ptrank, padd, showTimeLeft
from templates import *
from ROOT import ROOT, gROOT, TDirectory, TFile, gFile, TBranch, TLeaf, TTree
from ROOT import AddressOf
pwd = os.popen('pwd').read()
pwd = pwd.split('\n')[0]
pl = '.L ' + pwd + '/Objects' + '/Objects_m1.h+'
gROOT.ProcessLine(pl)
from ROOT import JetType, JetTypeSmall, JetTypePFC_fourVect, JetTypePFC_fiveVect, JetTypePFC_sixVect
Js = JetType()



#################
# settings      #
#################
path               = '/beegfs/desy/user/hezhiyua/backed/fromLisa/fromBrianLLP/'
#path               = '/beegfs/desy/user/hezhiyua/backed/fromLisa/fromLisaLLP//'
#path              = '/beegfs/desy/user/hezhiyua/backed/dustData/'+'crab_folder_v2/'#'/home/brian/datas/roottest/'
num_of_jets           = 1#3#4
testOn                = 0
nonLeadingJetsOn      = 0#1
nLimit                = 10000000000000
numOfEntriesToScan    = 100 #only when testOn = 1
Npfc                  = 40
# <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< adjusted for different oldfile location
path_out    = '/beegfs/desy/user/hezhiyua/2bBacked/skimmed/skim_output/'
versionN_b  = 'TuneCUETP8M1_13TeV-madgraphMLM-pythia8-v1'
#versionN_s  = 'TuneCUETP8M1_13TeV-powheg-pythia8_PRIVATE-MC'
versionN_s  = 'TuneCUETP8M1_13TeV-powheg-pythia8_Tranche2_PRIVATE-MC'
HT          = '50'
lola_on     = 0 # 1: prepared for lola
ct_dep      = 0 # 1: for ct dependence comparison
cut_on      = 1
life_time   = [] 
sgn_ct      = '500'
treeName    = 'tree44'
JetName     = 'Jet1s'
fn          = ''
newFileName = ''#fn.replace('.root','_skimed.root')

len_of_lt = len(life_time)

pars = argparse.ArgumentParser()
pars.add_argument('--ht'    ,action='store',type=int,help='specify HT of the QCD file')
pars.add_argument('-s'      ,action='store',type=int,help='specify if for VBF file')
pars.add_argument('--model' ,action='store',type=str,help='specify model')
pars.add_argument('-t'      ,action='store',type=int,help='specify if to do test')
pars.add_argument('--ct'    ,action='store',type=int,help='specify signal life time')
pars.add_argument('--mass'  ,action='store',type=int,help='specify signal mass')
pars.add_argument('--nj'    ,action='store',type=int,help='specify number of jets')
args = pars.parse_args()
if args.ht  :    HT = str( args.ht ) 
if args.s   :    ct_dep = args.s
if args.t   :    testOn = 1
if args.ct  :    sgn_ct      = args.ct
if args.mass:    sgn_mass    = args.mass
if args.nj  :    num_of_jets = args.nj

if   args.model == 'bdt':
    lola_on    = 0
elif args.model == 'lola5':
    lola_on    = 1
    NumOfVecEl = 5
elif args.model == 'lola6':
    lola_on    = 1
    NumOfVecEl = 6

life_time.append( str(sgn_ct) )

if lola_on:
    forLola   = structure(model='lola', nConstit=Npfc       , dimOfVect=NumOfVecEl)
    forLola.Objh()
else      :
    forBDT    = structure(model='bdt' , nConstit=1          , preStr='J'          ) # nConstit=num_of_jets
    forBDT.Objh()



if   ct_dep == 0:
    matchOn = 0
    if   '50'  == HT: channel = {'QCD':'QCD_HT50to100_'  + versionN_b + '.root'}
    elif '100' == HT: channel = {'QCD':'QCD_HT100to200_' + versionN_b + '.root'}
    elif '200' == HT: channel = {'QCD':'QCD_HT200to300_' + versionN_b + '.root'}
    elif '300' == HT: channel = {'QCD':'QCD_HT300to500_' + versionN_b + '.root'}
    elif '500'  == HT: channel = {'QCD':'QCD_HT500to700_'   + versionN_b + '.root'}
    elif '700'  == HT: channel = {'QCD':'QCD_HT700to1000_'  + versionN_b + '.root'}
    elif '1000' == HT: channel = {'QCD':'QCD_HT1000to1500_' + versionN_b + '.root'}
    elif '1500' == HT: channel = {'QCD':'QCD_HT1500to2000_' + versionN_b + '.root'}
    elif '2000' == HT: channel = {'QCD':'QCD_HT2000toInf_'  + versionN_b + '.root'}
elif ct_dep == 1:
    matchOn = 1
    channel = {}
    for lt in life_time:
        channel['ct' + lt] = 'VBFH_HToSSTobbbb_MH-125_MS-' + str(sgn_mass) + '_ctauS-' + lt + '_' + versionN_s + '.root'

# Struct
if   lola_on == 0:
    Jets1 = JetTypeSmall() #for bdt: JetTypeSmall; for lola: JetTypePFC_fourVect
elif lola_on == 1:
    if   NumOfVecEl == 5:    Jets1 = JetTypePFC_fiveVect() 
    elif NumOfVecEl == 6:    Jets1 = JetTypePFC_sixVect()

#-------------------------------------
cs            = {}
cs['pt_L']    = 'pt'  + '>' + '15'
cs['eta_L']   = 'eta' + '>' + '-2.4' 
cs['eta_U']   = 'eta' + '<' + '2.4'
cs['matched'] = 'isGenMatched' + '==' + '1'
#-------------------------------------
#-------------------------------------------------------------------------------------------------------------------------
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
if   cut_on == 1: print '\nCuts:\n',condition_str
elif cut_on == 0: print 'no cut applied~'
#-------------------------------------------------------------------------------------------------------------------------
#######################################
if   nonLeadingJetsOn == 0:    whichJetStr = 'k==0' # >>>>>>>>>>>>>>>>>>>>> 0 or 1????
elif nonLeadingJetsOn == 1:    whichJetStr = 'k>=0'
#######################################
#DisplacedJets_Trigger_str = 'oldTree.HLT_VBF_DisplacedJet40_DisplacedTrack_v or oldTree.HLT_VBF_DisplacedJet40_DisplacedTrack_2TrackIP2DSig5_v or oldTree.HLT_HT350_DisplacedDijet40_DisplacedTrack_v or oldTree.HLT_HT350_DisplacedDijet80_DisplacedTrack_v or oldTree.HLT_VBF_DisplacedJet40_VTightID_DisplacedTrack_v or oldTree.HLT_VBF_DisplacedJet40_VVTightID_DisplacedTrack_v or oldTree.HLT_HT350_DisplacedDijet80_Tight_DisplacedTrack_v or oldTree.HLT_VBF_DisplacedJet40_VTightID_Hadronic_v or oldTree.HLT_VBF_DisplacedJet40_VVTightID_Hadronic_v or oldTree.HLT_HT650_DisplacedDijet80_Inclusive_v or oldTree.HLT_HT750_DisplacedDijet80_Inclusive_v'
#######################################




tA = tm()
if lola_on == 1:
    inName = [ channel[i] for i in channel ][0]
    print inName
    j1Entry  = []
    j1Num    = []
    pan      = []
    f1       = TFile( path + inName , "r" )
    tin      = f1.Get('ntuple/tree')
    NumE     = tin.GetEntriesFast()
    print '\nEntries: ', NumE
    s_cut         = None#1000#None#100
    arr_energy    = rnp.tree2array(tin, ['PFCandidates.energy']  , stop=s_cut)
    arr_px        = rnp.tree2array(tin, ['PFCandidates.px']      , stop=s_cut)
    arr_py        = rnp.tree2array(tin, ['PFCandidates.py']      , stop=s_cut)
    arr_pz        = rnp.tree2array(tin, ['PFCandidates.pz']      , stop=s_cut)
    arr_c         = rnp.tree2array(tin, ['PFCandidates.isTrack'] , stop=s_cut)
    arr_pdgId     = rnp.tree2array(tin, ['PFCandidates.pdgId']   , stop=s_cut)
    arr_jetInd    = rnp.tree2array(tin, ['PFCandidates.jetIndex'], stop=s_cut)
    e_df          = pd.DataFrame(arr_energy)
    px_df         = pd.DataFrame(arr_px)
    py_df         = pd.DataFrame(arr_py)
    pz_df         = pd.DataFrame(arr_pz)
    c_df          = pd.DataFrame(arr_c)
    pdgId_df      = pd.DataFrame(arr_pdgId)
    jetInd_df     = pd.DataFrame(arr_jetInd)
    df            = pd.DataFrame()
    df['energy']  = e_df
    df['px']      = px_df
    df['py']      = py_df
    df['pz']      = pz_df
    df['c']       = c_df
    df['pdgId']   = pdgId_df
    df['jetInd']  = jetInd_df
    df            = df[ df['energy'].apply(len) != 0 ]
    df['ppt']     = df['px'].pow(2) + df['py'].pow(2) # to be optimized!!!!
    attr_list0    = ['jetInd','energy','px','py','pz','c','pdgId','ppt']
    df_dict       = {}
    for a in attr_list0:
        df_dict[a] = pd.DataFrame.from_records( df[a].values.tolist() )
        jet_one    = df_dict['jetInd']     == 0 #1????
        df_dict[a] = df_dict[a][jet_one]
    df_dict['pt'] = df_dict['ppt'].pow(1./2)
    df_pt_rank    = df_dict['pt'].rank(axis=1, ascending=False)
    pt_rank       = df_pt_rank.copy()

    def ordering(x, n_col):
        order   = []
        ord_dic = {}
        for i in xrange(n_col):
            if x[i] <= Npfc:    ord_dic[x[i]] = i
        cc = 1
        for key, item in ord_dic.iteritems():
            if cc == key:    order.append(item)
            cc += 1
        leng = len(order)
        if leng < Npfc:    order = order + (Npfc-leng)*[-1]
        return order

    def pick_top(x, default_val):
        order   = []
        for i in xrange(Npfc):
            i_col = x['o'+str(i)]
            if pd.isnull(i_col):    break
            elif i_col == -1   :    order.append(default_val)
            else               :    order.append( x[i_col] )
        return order

    n_col            = pt_rank.shape[1]
    order_pt         = pt_rank.apply(lambda row: ordering(row, n_col), axis=1)
    order_df         = pd.DataFrame.from_records( order_pt.values.tolist() )
    order_df.columns = [ 'o'+str(i) for i in range(Npfc) ]
    df_ord           = {}
    pan_list         = []
    attr_list        = ['energy','px','py','pz','c','pdgId','pt'] # pt not needed here

    for a in attr_list[:NumOfVecEl]: # to be checked!!!
        if   a == 'c'    :
            def_val = -1
            df_typ  = int
        elif a == 'pdgId':
            def_val = -1
            df_typ  = int
        else             :
            def_val = 0
            df_typ  = float
        tmp_df_ord   = pd.concat( [df_dict[a].copy(), order_df.copy()], axis=1)
        df_ord_list  = tmp_df_ord.apply(lambda row: pick_top(row, def_val), axis=1)
        df_ord[a]    = pd.DataFrame.from_records( df_ord_list.values.tolist() )
        tmp_df_ord   = df_ord[a].astype(df_typ)
        pan_list.append(tmp_df_ord)
    #print df_ord['pt'][:8]
    pan         = pd.concat(pan_list, axis=1)
    forLola.panColNameListGen()
    colN        = forLola.panColNameList
    pan.columns = colN
    print pan[:8]
tB = tm()
print 'Time: ', str(tB-tA), 'sec'




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
    oldFile                   = TFile(name, "READ")
    oldTree                   = oldFile.Get("ntuple/tree") 
    NofEntries                = oldTree.GetEntriesFast()
    numOfEntriesToScan_local  = NofEntries
    if NofEntries > nLimit:   numOfEntriesToScan_local = nLimit
    if testOn == 1:           numOfEntriesToScan_local = numOfEntriesToScan  
    #locate and register the Jet branches of the old ttree
    print '\nskimming file',oldFile.GetName(),'\tevents =',oldTree.GetEntries(),'\tweight =',oldTree.GetWeight(),'\n'
    newFile = TFile(newFileName, "RECREATE") #('Skim/' + newFileName, "RECREATE")
    newFile.cd()
    newTree = TTree(treeName, treeName)

    if   lola_on == 0:
        forBDT.branchLeafStrGen()
        newTree.Branch( JetName, Jets1, forBDT.branchLeafStr )
    elif lola_on == 1:
        forLola.branchLeafStrGen() 
        newTree.Branch( JetName, Jets1, forLola.branchLeafStr )
    # this attribute list must exactly match (the order of) the features in the header file!!!! 
        
    if not lola_on:    attr     = forBDT.preList + forBDT.attrTypeList
    else          :    attr_out = forLola.attrTypeList
    startTemp=0   
    #theweight = oldTree.GetWeight() 
    
    #def FillTrees(i):

    if lola_on == 0:    

        for i in xrange(0, numOfEntriesToScan_local):    
            start     = showTimeLeft(ii=i,mode='s',startTime=startTemp)
            startTemp = start

            oldTree.GetEntry(i)
            # selections
      
        #if lola_on == 0:      
            passB = 0
            for k in xrange( oldTree.Jets.size() ):

                if num_of_jets == 1:
                    if not eval(whichJetStr)        : continue
                else               :
                    if not (k>=0 and k<num_of_jets): continue 
                
                if cut_on == 1:                       
                    if not eval( condition_str ): continue
                    """
                        for stri in attr:
                            strTemp = 'J'+str(k+1)+''+stri 
                            #strTemp = 'J1'+stri
                            if   stri == 'eta' or stri == 'phi': dfv = -9.    
                            else                               : dfv = -1.  
                            setattr( Jets1, strTemp , dfv ) 
                        continue    
                    """
                    
                passB = 1 
                for stri in attr:
                    #strTemp      = 'J'+str(k+1)+''+stri 
                    strTemp      = 'J1'+stri 
                    fillingValue = getattr(oldTree.Jets[k], stri) 
                    setattr( Jets1 , strTemp , fillingValue )                
            if passB == 1:
                newTree.Fill()    
         
            showTimeLeft(ii=i,mode='e',startTime=start,numOfJobs=numOfEntriesToScan_local)  


    elif lola_on == 1:
        loop_depth = pan.shape[0]
        print '>>>>>>>>>>>>>>>>>>>>> # out events: ', loop_depth  
        for i in xrange(0, loop_depth):
            start     = showTimeLeft(ii=i,mode='s',startTime=startTemp)
            startTemp = start

            for ii in xrange(forLola.nConstit):
                for strO in attr_out:
                    tempAttrStrO = 'pfc' + str(ii+1) + '_' + strO
                    tempAttrStrI =  forLola.attrNameDic[strO] + '_' + str(ii+1)
                    setattr( Jets1 , tempAttrStrO , pan[tempAttrStrI][i] )
            #!!!!!!!!!!!!!!!!!!!!deal with the empty value situation!!!!!!!!!!!!!!!!!!!!!!
            newTree.Fill()
              
            showTimeLeft(ii=i,mode='e',startTime=start,numOfJobs=numOfEntriesToScan_local)






    
    #set up parallel pool
    #pool = mp.Pool(processes=80)
    #pool.map(FillTrees, xrange(0, numOfEntriesToScan_local))


    print '\nproduced skimmed file',newFile.GetName(),'\tevents =',newTree.GetEntries(),'\tweight =',newTree.GetWeight()
    newFile.cd()
    newFile.Write()
    newFile.Close() 
#-----------------------------------------------------------------------------------------------------------

#-----------===============================
def skim(names): 
    for cc in channel:
        nFn = channel[cc].replace('.root','_' + str(num_of_jets) + 'j_skimed.root')
        ss = path + channel[cc]    
        skim_c(ss,nFn)
        #pi = mp.Process(target=skim_c, args=(ss,nFn))
        #pi.start()
#-----------===============================

#=====================================================================================================
os.chdir(path_out)
#if not os.path.isdir('Skim'): os.mkdir('Skim')
p = mp.Process(target=skim, args=(fn,))
p.start()
#=====================================================================================================








#_____________________________________________old lines:
"""
    for j in xrange(num_of_jets):
        if 'QCD' in name:
            #oldTree.SetBranchAddress( 'Jets' , AddressOf(Jet_old_dict[j+1], 'pt') )
            #oldTree.SetBranchAddress( 'MatchedCHSJet' + str(j+1) , AddressOf(Jet_old_dict[j+1], 'pt') )
        elif 'ctauS' in name:
            #oldTree.SetBranchAddress( 'MatchedCHSJet' + str(j+1) , AddressOf(Jet_old_dict[j+1], 'pt') )
            #oldTree.SetBranchAddress( 'Jets' , AddressOf(Jet_old_dict[j+1], 'pt') )
""" 

#--------------------------------
#Jet_old_dict = {}
#for j in xrange(num_of_jets):
#    Jet_old_dict[j+1] = JetType()
#Jet_old_dict[1] = JetType()
#--------------------------------

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


"""

if lola_on == 1:
    inName = channel['ct500']#channel['QCD']#''#[for i in channel: channel[i]][0]

    j1Entry  = []
    j1Num    = [] 
    pan      = []

    f1 = TFile( path + inName , "r" )
    t1 = f1.Get('ntuple/tree')

    NumE = t1.GetEntriesFast()
    print '\nEntries: ', NumE
    t1.SetBranchAddress( vectName , AddressOf(Js, 'pt') )

    b1 = t1.GetBranch('PFCandidates')
    nEntries = b1.GetEntries()

    if testOn == 0: 
        numOfEntriesToScan = nEntries
        if nEntries > 1000000:        numOfEntriesToScan = 1000000 

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

        for num in xrange(0,scanDepth):
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
        
        if nr == numOfEntriesToScan: break     

    print 'num of entries: ' + str(nEntries)   
    forLola.panColNameListGen()
    colN = forLola.panColNameList

    jet1 = pd.DataFrame(pan, columns=colN)  
"""


