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



forBDT      = structure()
forLolaFive = structure(model='lola',nConstit=40,dimOfVect=5)
forLolaSix  = structure(model='lola',nConstit=40,dimOfVect=6)



path        = '/beegfs/desy/user/hezhiyua/backed/dustData/'+'crab_folder_v2/'#'/home/brian/datas/roottest/'
#inName     = 'VBFH_HToSSTobbbb_MH-125_MS-40_ctauS-500_jetOnly.root'
testOn      = 0
numOfEntriesToScan = 100 #only when testOn = 1
NumOfVecEl  = 6
Npfc        = 40
#scanDepth  = 44
vectName    = 'MatchedCHSJet1' #'Jets'

#adjusted for different oldfile location
args1       = '/beegfs/desy/user/hezhiyua/2bBacked/skimmed/'#'.'
versionN_b  = 'TuneCUETP8M1_13TeV-madgraphMLM-pythia8-v1'
versionN_s  = 'TuneCUETP8M1_13TeV-powheg-pythia8_PRIVATE-MC'
HT          = '50'
fn          = ''
newFileName = fn.replace('.root','_skimed.root')
lola_on     = 0 # 1: prepared for lola
ct_dep      = 0 #1 for ct dependence comparison
cut_on      = 1
life_time   = ['500'] #['0','0p1','0p05','1','5','10','25','50','100','500','1000','2000','5000','10000']
num_of_jets = 1 #4

treeName    = 'tree44'
JetName     = 'Jet1s'

len_of_lt = len(life_time)

pars = argparse.ArgumentParser()
pars.add_argument('--ht',action='store',type=int,help='specify HT of the QCD file')
pars.add_argument('-s'  ,action='store',type=int,help='specify if for VBF file')
args = pars.parse_args()
if args.ht:
    HT = str( args.ht ) 
if args.s:
    ct_dep = args.s


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
elif ct_dep == 1:
    matchOn = 1
    channel = {}
    for lt in life_time:
        channel['ct' + lt] = 'VBFH_HToSSTobbbb_MH-125_MS-40_ctauS-' + lt + '_' + versionN_s + '.root'

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
condition_str_dict = {}
for j in range(num_of_jets):
    #prs = 'Jet_old_dict[' +str(j+1) + '].'
    prs = 'oldTree.Jets[k].' 
    a   = ' and '
    o   = ' or '
    condition_str_dict[j+1] = '(' + prs + cs['pt_L']  + ')' +\
                              a +\
                              '(' + prs + cs['eta_L'] + ')' +\
                              a +\
                              '(' + prs + cs['eta_U'] + ')'
    if matchOn == 1:
        condition_str_dict[j+1] = condition_str_dict[j+1] +\
                                  a +\
                                  '(' + prs + cs['matched']  + ')'
if   cut_on == 1:
    print condition_str_dict[1]
elif cut_on == 0:
    print 'no cut applied~'
#---------------------------------------------------------------------------------------------------------------------------------


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

    if NumOfVecEl == 5:
        forLolaFive.panColNameListGen()
        colN = forLolaFive.panColNameList 
    elif NumOfVecEl == 6:
        forLolaSix.panColNameListGen()
        colN = forLolaSix.panColNameList

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
    numOfEntriesToScan_local = numOfEntriesToScan
    #--------------------------------
    Jet_old_dict = {}
    for j in range(num_of_jets):
        Jet_old_dict[j+1] = JetType()
    #--------------------------------
    oldFile = TFile(name, "READ")
    oldTree = oldFile.Get("ntuple/tree") 
    NofEntries = oldTree.GetEntriesFast()
    #locate and register the Jet branches of the old ttree
    print 'skimming file',oldFile.GetName(),'\tevents =',oldTree.GetEntries(),'\tweight =',oldTree.GetWeight()
    print 'filename:', name
    newFile = TFile('Skim/' + newFileName, "RECREATE")
    newFile.cd()
    newTree = TTree(treeName, treeName)

    if   lola_on == 0:
        forBDT.branchLeafStrGen()
        newTree.Branch( JetName, Jets1, forBDT.branchLeafStr )
        if testOn == 0:
            numOfEntriesToScan_local = oldTree.GetEntriesFast()
    elif lola_on == 1:
        if NumOfVecEl == 5:
            forLolaFive.branchLeafStrGen() 
            newTree.Branch( JetName, Jets1, forLolaFive.branchLeafStr )
            if testOn == 0:
                numOfEntriesToScan_local = oldTree.GetEntriesFast()
        elif NumOfVecEl == 6:
            forLolaSix.branchLeafStrGen()
            newTree.Branch( JetName, Jets1, forLolaSix.branchLeafStr )  
            if testOn == 0:
                numOfEntriesToScan_local = oldTree.GetEntriesFast()
    # this attribute list must exactly match (the order of) the features in the header file!!!! 

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
        for j in range(num_of_jets):
            #if cut_on == 0:
            #    condition_str_dict[j+1] = '1'
            #if eval( condition_str_dict[j+1] ):
            if 1:    
                if lola_on == 0:        
                    for k in xrange( oldTree.Jets.size() ):
                        #print oldTree.Jets.size() 
                        if k == 1:
                            if cut_on == 0:
                                condition_str_dict[j+1] = '1'
                            if eval( condition_str_dict[j+1] ):
                                Jets1.pt             = oldTree.Jets[k].pt
                                Jets1.eta            = oldTree.Jets[k].eta
                                Jets1.phi            = oldTree.Jets[k].phi
                                Jets1.mass           = oldTree.Jets[k].mass
                                Jets1.energy         = oldTree.Jets[k].energy

                                Jets1.cHadE          = oldTree.Jets[k].cHadE
                                Jets1.nHadE          = oldTree.Jets[k].nHadE
                                Jets1.cHadEFrac      = oldTree.Jets[k].cHadEFrac
                                Jets1.nHadEFrac      = oldTree.Jets[k].nHadEFrac
                                Jets1.nEmE           = oldTree.Jets[k].nEmE
                                Jets1.nEmEFrac       = oldTree.Jets[k].nEmEFrac
                                Jets1.cEmE           = oldTree.Jets[k].cEmE     
                                Jets1.cEmEFrac       = oldTree.Jets[k].cEmEFrac                    
                                Jets1.cmuE           = oldTree.Jets[k].cmuE
                                Jets1.cmuEFrac       = oldTree.Jets[k].cmuEFrac
                                Jets1.muE            = oldTree.Jets[k].muE     
                                Jets1.muEFrac        = oldTree.Jets[k].muEFrac
                                Jets1.eleE           = oldTree.Jets[k].eleE
                                Jets1.eleEFrac       = oldTree.Jets[k].eleEFrac
                                Jets1.eleMulti       = oldTree.Jets[k].eleMulti  
                                Jets1.photonE        = oldTree.Jets[k].photonE                   
                                Jets1.photonEFrac    = oldTree.Jets[k].photonEFrac
                                Jets1.photonMulti    = oldTree.Jets[k].photonMulti     
                                Jets1.cHadMulti      = oldTree.Jets[k].cHadMulti
                                Jets1.npr            = oldTree.Jets[k].npr
                                Jets1.cMulti         = oldTree.Jets[k].cMulti
                                Jets1.nMulti         = oldTree.Jets[k].nMulti

                                fraccal = oldTree.Jets[k].FracCal  
                                if fraccal <= 0:
                                    Jets1.FracCal    = 0.
                                elif fraccal > 400:
                                    Jets1.FracCal    = 400.
                                else:
                                    Jets1.FracCal    = fraccal
    
                        else: pass    
                        
                    
                    
                elif lola_on == 1:
                    if NumOfVecEl == 5:
                        Jets1.pfc1_energy    = jet1['E_1'][i]
                        Jets1.pfc1_energy    = jet1['E_1'][i]
                        Jets1.pfc1_px        = jet1['PX_1'][i]
                        Jets1.pfc1_py        = jet1['PY_1'][i]
                        Jets1.pfc1_pz        = jet1['PZ_1'][i]
                        Jets1.pfc1_ifTrack   = jet1['C_1'][i]
                        Jets1.pfc2_energy    = jet1['E_2'][i]
                        Jets1.pfc2_px        = jet1['PX_2'][i]
                        Jets1.pfc2_py        = jet1['PY_2'][i]
                        Jets1.pfc2_pz        = jet1['PZ_2'][i]
                        Jets1.pfc2_ifTrack   = jet1['C_2'][i]
                        Jets1.pfc3_energy    = jet1['E_3'][i]
                        Jets1.pfc3_px        = jet1['PX_3'][i]
                        Jets1.pfc3_py        = jet1['PY_3'][i]
                        Jets1.pfc3_pz        = jet1['PZ_3'][i]
                        Jets1.pfc3_ifTrack   = jet1['C_3'][i]
                        Jets1.pfc4_energy    = jet1['E_4'][i]
                        Jets1.pfc4_px        = jet1['PX_4'][i]
                        Jets1.pfc4_py        = jet1['PY_4'][i]
                        Jets1.pfc4_pz        = jet1['PZ_4'][i]
                        Jets1.pfc4_ifTrack   = jet1['C_4'][i]
                        Jets1.pfc5_energy    = jet1['E_5'][i]
                        Jets1.pfc5_px        = jet1['PX_5'][i]
                        Jets1.pfc5_py        = jet1['PY_5'][i]
                        Jets1.pfc5_pz        = jet1['PZ_5'][i]
                        Jets1.pfc5_ifTrack   = jet1['C_5'][i]
                        Jets1.pfc6_energy    = jet1['E_6'][i]
                        Jets1.pfc6_px        = jet1['PX_6'][i]
                        Jets1.pfc6_py        = jet1['PY_6'][i]
                        Jets1.pfc6_pz        = jet1['PZ_6'][i]
                        Jets1.pfc6_ifTrack   = jet1['C_6'][i]
                        Jets1.pfc7_energy    = jet1['E_7'][i]
                        Jets1.pfc7_px        = jet1['PX_7'][i]
                        Jets1.pfc7_py        = jet1['PY_7'][i]
                        Jets1.pfc7_pz        = jet1['PZ_7'][i]
                        Jets1.pfc7_ifTrack   = jet1['C_7'][i]
                        Jets1.pfc8_energy    = jet1['E_8'][i]
                        Jets1.pfc8_px        = jet1['PX_8'][i]
                        Jets1.pfc8_py        = jet1['PY_8'][i]
                        Jets1.pfc8_pz        = jet1['PZ_8'][i]
                        Jets1.pfc8_ifTrack   = jet1['C_8'][i]
                        Jets1.pfc9_energy    = jet1['E_9'][i]
                        Jets1.pfc9_px        = jet1['PX_9'][i]
                        Jets1.pfc9_py        = jet1['PY_9'][i]
                        Jets1.pfc9_pz        = jet1['PZ_9'][i]
                        Jets1.pfc9_ifTrack   = jet1['C_9'][i]
                        Jets1.pfc10_energy    = jet1['E_10'][i]
                        Jets1.pfc10_px        = jet1['PX_10'][i]
                        Jets1.pfc10_py        = jet1['PY_10'][i]
                        Jets1.pfc10_pz        = jet1['PZ_10'][i]
                        Jets1.pfc10_ifTrack   = jet1['C_10'][i]
                        Jets1.pfc11_energy    = jet1['E_11'][i]
                        Jets1.pfc11_px        = jet1['PX_11'][i]
                        Jets1.pfc11_py        = jet1['PY_11'][i]
                        Jets1.pfc11_pz        = jet1['PZ_11'][i]
                        Jets1.pfc11_ifTrack   = jet1['C_11'][i]
                        Jets1.pfc12_energy    = jet1['E_12'][i]
                        Jets1.pfc12_px        = jet1['PX_12'][i]
                        Jets1.pfc12_py        = jet1['PY_12'][i]
                        Jets1.pfc12_pz        = jet1['PZ_12'][i]
                        Jets1.pfc12_ifTrack   = jet1['C_12'][i]
                        Jets1.pfc13_energy    = jet1['E_13'][i]
                        Jets1.pfc13_px        = jet1['PX_13'][i]
                        Jets1.pfc13_py        = jet1['PY_13'][i]
                        Jets1.pfc13_pz        = jet1['PZ_13'][i]
                        Jets1.pfc13_ifTrack   = jet1['C_13'][i]
                        Jets1.pfc14_energy    = jet1['E_14'][i]
                        Jets1.pfc14_px        = jet1['PX_14'][i]
                        Jets1.pfc14_py        = jet1['PY_14'][i]
                        Jets1.pfc14_pz        = jet1['PZ_14'][i]
                        Jets1.pfc14_ifTrack   = jet1['C_14'][i]
                        Jets1.pfc15_energy    = jet1['E_15'][i]
                        Jets1.pfc15_px        = jet1['PX_15'][i]
                        Jets1.pfc15_py        = jet1['PY_15'][i]
                        Jets1.pfc15_pz        = jet1['PZ_15'][i]
                        Jets1.pfc15_ifTrack   = jet1['C_15'][i]
                        Jets1.pfc16_energy    = jet1['E_16'][i]
                        Jets1.pfc16_px        = jet1['PX_16'][i]
                        Jets1.pfc16_py        = jet1['PY_16'][i]
                        Jets1.pfc16_pz        = jet1['PZ_16'][i]
                        Jets1.pfc16_ifTrack   = jet1['C_16'][i]
                        Jets1.pfc17_energy    = jet1['E_17'][i]
                        Jets1.pfc17_px        = jet1['PX_17'][i]
                        Jets1.pfc17_py        = jet1['PY_17'][i]
                        Jets1.pfc17_pz        = jet1['PZ_17'][i]
                        Jets1.pfc17_ifTrack   = jet1['C_17'][i]
                        Jets1.pfc18_energy    = jet1['E_18'][i]
                        Jets1.pfc18_px        = jet1['PX_18'][i]
                        Jets1.pfc18_py        = jet1['PY_18'][i]
                        Jets1.pfc18_pz        = jet1['PZ_18'][i]
                        Jets1.pfc18_ifTrack   = jet1['C_18'][i]
                        Jets1.pfc19_energy    = jet1['E_19'][i]
                        Jets1.pfc19_px        = jet1['PX_19'][i]
                        Jets1.pfc19_py        = jet1['PY_19'][i]
                        Jets1.pfc19_pz        = jet1['PZ_19'][i]
                        Jets1.pfc19_ifTrack   = jet1['C_19'][i]
                        Jets1.pfc20_energy    = jet1['E_20'][i]
                        Jets1.pfc20_px        = jet1['PX_20'][i]
                        Jets1.pfc20_py        = jet1['PY_20'][i]
                        Jets1.pfc20_pz        = jet1['PZ_20'][i]
                        Jets1.pfc20_ifTrack   = jet1['C_20'][i]
                        Jets1.pfc21_energy    = jet1['E_21'][i]
                        Jets1.pfc21_px        = jet1['PX_21'][i]
                        Jets1.pfc21_py        = jet1['PY_21'][i]
                        Jets1.pfc21_pz        = jet1['PZ_21'][i]
                        Jets1.pfc21_ifTrack   = jet1['C_21'][i]
                        Jets1.pfc22_energy    = jet1['E_22'][i]
                        Jets1.pfc22_px        = jet1['PX_22'][i]
                        Jets1.pfc22_py        = jet1['PY_22'][i]
                        Jets1.pfc22_pz        = jet1['PZ_22'][i]
                        Jets1.pfc22_ifTrack   = jet1['C_22'][i]
                        Jets1.pfc23_energy    = jet1['E_23'][i]
                        Jets1.pfc23_px        = jet1['PX_23'][i]
                        Jets1.pfc23_py        = jet1['PY_23'][i]
                        Jets1.pfc23_pz        = jet1['PZ_23'][i]
                        Jets1.pfc23_ifTrack   = jet1['C_23'][i]
                        Jets1.pfc24_energy    = jet1['E_24'][i]
                        Jets1.pfc24_px        = jet1['PX_24'][i]
                        Jets1.pfc24_py        = jet1['PY_24'][i]
                        Jets1.pfc24_pz        = jet1['PZ_24'][i]
                        Jets1.pfc24_ifTrack   = jet1['C_24'][i]
                        Jets1.pfc25_energy    = jet1['E_25'][i]
                        Jets1.pfc25_px        = jet1['PX_25'][i]
                        Jets1.pfc25_py        = jet1['PY_25'][i]
                        Jets1.pfc25_pz        = jet1['PZ_25'][i]
                        Jets1.pfc25_ifTrack   = jet1['C_25'][i]
                        Jets1.pfc26_energy    = jet1['E_26'][i]
                        Jets1.pfc26_px        = jet1['PX_26'][i]
                        Jets1.pfc26_py        = jet1['PY_26'][i]
                        Jets1.pfc26_pz        = jet1['PZ_26'][i]
                        Jets1.pfc26_ifTrack   = jet1['C_26'][i]
                        Jets1.pfc27_energy    = jet1['E_27'][i]
                        Jets1.pfc27_px        = jet1['PX_27'][i]
                        Jets1.pfc27_py        = jet1['PY_27'][i]
                        Jets1.pfc27_pz        = jet1['PZ_27'][i]
                        Jets1.pfc27_ifTrack   = jet1['C_27'][i]
                        Jets1.pfc28_energy    = jet1['E_28'][i]
                        Jets1.pfc28_px        = jet1['PX_28'][i]
                        Jets1.pfc28_py        = jet1['PY_28'][i]
                        Jets1.pfc28_pz        = jet1['PZ_28'][i]
                        Jets1.pfc28_ifTrack   = jet1['C_28'][i]
                        Jets1.pfc29_energy    = jet1['E_29'][i]
                        Jets1.pfc29_px        = jet1['PX_29'][i]
                        Jets1.pfc29_py        = jet1['PY_29'][i]
                        Jets1.pfc29_pz        = jet1['PZ_29'][i]
                        Jets1.pfc29_ifTrack   = jet1['C_29'][i]
                        Jets1.pfc30_energy    = jet1['E_30'][i]
                        Jets1.pfc30_px        = jet1['PX_30'][i]
                        Jets1.pfc30_py        = jet1['PY_30'][i]
                        Jets1.pfc30_pz        = jet1['PZ_30'][i]
                        Jets1.pfc30_ifTrack   = jet1['C_30'][i]
                        Jets1.pfc31_energy    = jet1['E_31'][i]
                        Jets1.pfc31_px        = jet1['PX_31'][i]
                        Jets1.pfc31_py        = jet1['PY_31'][i]
                        Jets1.pfc31_pz        = jet1['PZ_31'][i]
                        Jets1.pfc31_ifTrack   = jet1['C_31'][i]
                        Jets1.pfc32_energy    = jet1['E_32'][i]
                        Jets1.pfc32_px        = jet1['PX_32'][i]
                        Jets1.pfc32_py        = jet1['PY_32'][i]
                        Jets1.pfc32_pz        = jet1['PZ_32'][i]
                        Jets1.pfc32_ifTrack   = jet1['C_32'][i]
                        Jets1.pfc33_energy    = jet1['E_33'][i]
                        Jets1.pfc33_px        = jet1['PX_33'][i]
                        Jets1.pfc33_py        = jet1['PY_33'][i]
                        Jets1.pfc33_pz        = jet1['PZ_33'][i]
                        Jets1.pfc33_ifTrack   = jet1['C_33'][i]
                        Jets1.pfc34_energy    = jet1['E_34'][i]
                        Jets1.pfc34_px        = jet1['PX_34'][i]
                        Jets1.pfc34_py        = jet1['PY_34'][i]
                        Jets1.pfc34_pz        = jet1['PZ_34'][i]
                        Jets1.pfc34_ifTrack   = jet1['C_34'][i]
                        Jets1.pfc35_energy    = jet1['E_35'][i]
                        Jets1.pfc35_px        = jet1['PX_35'][i]
                        Jets1.pfc35_py        = jet1['PY_35'][i]
                        Jets1.pfc35_pz        = jet1['PZ_35'][i]
                        Jets1.pfc35_ifTrack   = jet1['C_35'][i]
                        Jets1.pfc36_energy    = jet1['E_36'][i]
                        Jets1.pfc36_px        = jet1['PX_36'][i]
                        Jets1.pfc36_py        = jet1['PY_36'][i]
                        Jets1.pfc36_pz        = jet1['PZ_36'][i]
                        Jets1.pfc36_ifTrack   = jet1['C_36'][i]
                        Jets1.pfc37_energy    = jet1['E_37'][i]
                        Jets1.pfc37_px        = jet1['PX_37'][i]
                        Jets1.pfc37_py        = jet1['PY_37'][i]
                        Jets1.pfc37_pz        = jet1['PZ_37'][i]
                        Jets1.pfc37_ifTrack   = jet1['C_37'][i]
                        Jets1.pfc38_energy    = jet1['E_38'][i]
                        Jets1.pfc38_px        = jet1['PX_38'][i]
                        Jets1.pfc38_py        = jet1['PY_38'][i]
                        Jets1.pfc38_pz        = jet1['PZ_38'][i]
                        Jets1.pfc38_ifTrack   = jet1['C_38'][i]
                        Jets1.pfc39_energy    = jet1['E_39'][i]
                        Jets1.pfc39_px        = jet1['PX_39'][i]
                        Jets1.pfc39_py        = jet1['PY_39'][i]
                        Jets1.pfc39_pz        = jet1['PZ_39'][i]
                        Jets1.pfc39_ifTrack   = jet1['C_39'][i]
                        Jets1.pfc40_energy    = jet1['E_40'][i]
                        Jets1.pfc40_px        = jet1['PX_40'][i]
                        Jets1.pfc40_py        = jet1['PY_40'][i]
                        Jets1.pfc40_pz        = jet1['PZ_40'][i]
                        Jets1.pfc40_ifTrack   = jet1['C_40'][i]
                    elif NumOfVecEl == 6:
                        Jets1.pfc1_energy    = jet1['E_1'][i]
                        Jets1.pfc1_px        = jet1['PX_1'][i]
                        Jets1.pfc1_py        = jet1['PY_1'][i]
                        Jets1.pfc1_pz        = jet1['PZ_1'][i]
                        Jets1.pfc1_ifTrack   = jet1['C_1'][i]
                        Jets1.pfc1_pType     = jet1['PID_1'][i]
                        Jets1.pfc2_energy    = jet1['E_2'][i]
                        Jets1.pfc2_px        = jet1['PX_2'][i]
                        Jets1.pfc2_py        = jet1['PY_2'][i]
                        Jets1.pfc2_pz        = jet1['PZ_2'][i]
                        Jets1.pfc2_ifTrack   = jet1['C_2'][i]
                        Jets1.pfc2_pType     = jet1['PID_2'][i]
                        Jets1.pfc3_energy    = jet1['E_3'][i]
                        Jets1.pfc3_px        = jet1['PX_3'][i]
                        Jets1.pfc3_py        = jet1['PY_3'][i]
                        Jets1.pfc3_pz        = jet1['PZ_3'][i]
                        Jets1.pfc3_ifTrack   = jet1['C_3'][i]
                        Jets1.pfc3_pType     = jet1['PID_3'][i]
                        Jets1.pfc4_energy    = jet1['E_4'][i]
                        Jets1.pfc4_px        = jet1['PX_4'][i]
                        Jets1.pfc4_py        = jet1['PY_4'][i]
                        Jets1.pfc4_pz        = jet1['PZ_4'][i]
                        Jets1.pfc4_ifTrack   = jet1['C_4'][i]
                        Jets1.pfc4_pType     = jet1['PID_4'][i]
                        Jets1.pfc5_energy    = jet1['E_5'][i]
                        Jets1.pfc5_px        = jet1['PX_5'][i]
                        Jets1.pfc5_py        = jet1['PY_5'][i]
                        Jets1.pfc5_pz        = jet1['PZ_5'][i]
                        Jets1.pfc5_ifTrack   = jet1['C_5'][i]
                        Jets1.pfc5_pType     = jet1['PID_5'][i]
                        Jets1.pfc6_energy    = jet1['E_6'][i]
                        Jets1.pfc6_px        = jet1['PX_6'][i]
                        Jets1.pfc6_py        = jet1['PY_6'][i]
                        Jets1.pfc6_pz        = jet1['PZ_6'][i]
                        Jets1.pfc6_ifTrack   = jet1['C_6'][i]
                        Jets1.pfc6_pType     = jet1['PID_6'][i]
                        Jets1.pfc7_energy    = jet1['E_7'][i]
                        Jets1.pfc7_px        = jet1['PX_7'][i]
                        Jets1.pfc7_py        = jet1['PY_7'][i]
                        Jets1.pfc7_pz        = jet1['PZ_7'][i]
                        Jets1.pfc7_ifTrack   = jet1['C_7'][i]
                        Jets1.pfc7_pType     = jet1['PID_7'][i]
                        Jets1.pfc8_energy    = jet1['E_8'][i]
                        Jets1.pfc8_px        = jet1['PX_8'][i]
                        Jets1.pfc8_py        = jet1['PY_8'][i]
                        Jets1.pfc8_pz        = jet1['PZ_8'][i]
                        Jets1.pfc8_ifTrack   = jet1['C_8'][i]
                        Jets1.pfc8_pType     = jet1['PID_8'][i]
                        Jets1.pfc9_energy    = jet1['E_9'][i]
                        Jets1.pfc9_px        = jet1['PX_9'][i]
                        Jets1.pfc9_py        = jet1['PY_9'][i]
                        Jets1.pfc9_pz        = jet1['PZ_9'][i]
                        Jets1.pfc9_ifTrack   = jet1['C_9'][i]
                        Jets1.pfc9_pType     = jet1['PID_9'][i]
                        Jets1.pfc10_energy    = jet1['E_10'][i]
                        Jets1.pfc10_px        = jet1['PX_10'][i]
                        Jets1.pfc10_py        = jet1['PY_10'][i]
                        Jets1.pfc10_pz        = jet1['PZ_10'][i]
                        Jets1.pfc10_ifTrack   = jet1['C_10'][i]
                        Jets1.pfc10_pType     = jet1['PID_10'][i]
                        Jets1.pfc11_energy    = jet1['E_11'][i]
                        Jets1.pfc11_px        = jet1['PX_11'][i]
                        Jets1.pfc11_py        = jet1['PY_11'][i]
                        Jets1.pfc11_pz        = jet1['PZ_11'][i]
                        Jets1.pfc11_ifTrack   = jet1['C_11'][i]
                        Jets1.pfc11_pType     = jet1['PID_11'][i]
                        Jets1.pfc12_energy    = jet1['E_12'][i]
                        Jets1.pfc12_px        = jet1['PX_12'][i]
                        Jets1.pfc12_py        = jet1['PY_12'][i]
                        Jets1.pfc12_pz        = jet1['PZ_12'][i]
                        Jets1.pfc12_ifTrack   = jet1['C_12'][i]
                        Jets1.pfc12_pType     = jet1['PID_12'][i]
                        Jets1.pfc13_energy    = jet1['E_13'][i]
                        Jets1.pfc13_px        = jet1['PX_13'][i]
                        Jets1.pfc13_py        = jet1['PY_13'][i]
                        Jets1.pfc13_pz        = jet1['PZ_13'][i]
                        Jets1.pfc13_ifTrack   = jet1['C_13'][i]
                        Jets1.pfc13_pType     = jet1['PID_13'][i]
                        Jets1.pfc14_energy    = jet1['E_14'][i]
                        Jets1.pfc14_px        = jet1['PX_14'][i]
                        Jets1.pfc14_py        = jet1['PY_14'][i]
                        Jets1.pfc14_pz        = jet1['PZ_14'][i]
                        Jets1.pfc14_ifTrack   = jet1['C_14'][i]
                        Jets1.pfc14_pType     = jet1['PID_14'][i]
                        Jets1.pfc15_energy    = jet1['E_15'][i]
                        Jets1.pfc15_px        = jet1['PX_15'][i]
                        Jets1.pfc15_py        = jet1['PY_15'][i]
                        Jets1.pfc15_pz        = jet1['PZ_15'][i]
                        Jets1.pfc15_ifTrack   = jet1['C_15'][i]
                        Jets1.pfc15_pType     = jet1['PID_15'][i]
                        Jets1.pfc16_energy    = jet1['E_16'][i]
                        Jets1.pfc16_px        = jet1['PX_16'][i]
                        Jets1.pfc16_py        = jet1['PY_16'][i]
                        Jets1.pfc16_pz        = jet1['PZ_16'][i]
                        Jets1.pfc16_ifTrack   = jet1['C_16'][i]
                        Jets1.pfc16_pType     = jet1['PID_16'][i]
                        Jets1.pfc17_energy    = jet1['E_17'][i]
                        Jets1.pfc17_px        = jet1['PX_17'][i]
                        Jets1.pfc17_py        = jet1['PY_17'][i]
                        Jets1.pfc17_pz        = jet1['PZ_17'][i]
                        Jets1.pfc17_ifTrack   = jet1['C_17'][i]
                        Jets1.pfc17_pType     = jet1['PID_17'][i]
                        Jets1.pfc18_energy    = jet1['E_18'][i]
                        Jets1.pfc18_px        = jet1['PX_18'][i]
                        Jets1.pfc18_py        = jet1['PY_18'][i]
                        Jets1.pfc18_pz        = jet1['PZ_18'][i]
                        Jets1.pfc18_ifTrack   = jet1['C_18'][i]
                        Jets1.pfc18_pType     = jet1['PID_18'][i]
                        Jets1.pfc19_energy    = jet1['E_19'][i]
                        Jets1.pfc19_px        = jet1['PX_19'][i]
                        Jets1.pfc19_py        = jet1['PY_19'][i]
                        Jets1.pfc19_pz        = jet1['PZ_19'][i]
                        Jets1.pfc19_ifTrack   = jet1['C_19'][i]
                        Jets1.pfc19_pType     = jet1['PID_19'][i]
                        Jets1.pfc20_energy    = jet1['E_20'][i]
                        Jets1.pfc20_px        = jet1['PX_20'][i]
                        Jets1.pfc20_py        = jet1['PY_20'][i]
                        Jets1.pfc20_pz        = jet1['PZ_20'][i]
                        Jets1.pfc20_ifTrack   = jet1['C_20'][i]
                        Jets1.pfc20_pType     = jet1['PID_20'][i]
                        Jets1.pfc21_energy    = jet1['E_21'][i]
                        Jets1.pfc21_px        = jet1['PX_21'][i]
                        Jets1.pfc21_py        = jet1['PY_21'][i]
                        Jets1.pfc21_pz        = jet1['PZ_21'][i]
                        Jets1.pfc21_ifTrack   = jet1['C_21'][i]
                        Jets1.pfc21_pType     = jet1['PID_21'][i]
                        Jets1.pfc22_energy    = jet1['E_22'][i]
                        Jets1.pfc22_px        = jet1['PX_22'][i]
                        Jets1.pfc22_py        = jet1['PY_22'][i]
                        Jets1.pfc22_pz        = jet1['PZ_22'][i]
                        Jets1.pfc22_ifTrack   = jet1['C_22'][i]
                        Jets1.pfc22_pType     = jet1['PID_22'][i]
                        Jets1.pfc23_energy    = jet1['E_23'][i]
                        Jets1.pfc23_px        = jet1['PX_23'][i]
                        Jets1.pfc23_py        = jet1['PY_23'][i]
                        Jets1.pfc23_pz        = jet1['PZ_23'][i]
                        Jets1.pfc23_ifTrack   = jet1['C_23'][i]
                        Jets1.pfc23_pType     = jet1['PID_23'][i]
                        Jets1.pfc24_energy    = jet1['E_24'][i]
                        Jets1.pfc24_px        = jet1['PX_24'][i]
                        Jets1.pfc24_py        = jet1['PY_24'][i]
                        Jets1.pfc24_pz        = jet1['PZ_24'][i]
                        Jets1.pfc24_ifTrack   = jet1['C_24'][i]
                        Jets1.pfc24_pType     = jet1['PID_24'][i]
                        Jets1.pfc25_energy    = jet1['E_25'][i]
                        Jets1.pfc25_px        = jet1['PX_25'][i]
                        Jets1.pfc25_py        = jet1['PY_25'][i]
                        Jets1.pfc25_pz        = jet1['PZ_25'][i]
                        Jets1.pfc25_ifTrack   = jet1['C_25'][i]
                        Jets1.pfc25_pType     = jet1['PID_25'][i]
                        Jets1.pfc26_energy    = jet1['E_26'][i]
                        Jets1.pfc26_px        = jet1['PX_26'][i]
                        Jets1.pfc26_py        = jet1['PY_26'][i]
                        Jets1.pfc26_pz        = jet1['PZ_26'][i]
                        Jets1.pfc26_ifTrack   = jet1['C_26'][i]
                        Jets1.pfc26_pType     = jet1['PID_26'][i]
                        Jets1.pfc27_energy    = jet1['E_27'][i]
                        Jets1.pfc27_px        = jet1['PX_27'][i]
                        Jets1.pfc27_py        = jet1['PY_27'][i]
                        Jets1.pfc27_pz        = jet1['PZ_27'][i]
                        Jets1.pfc27_ifTrack   = jet1['C_27'][i]
                        Jets1.pfc27_pType     = jet1['PID_27'][i]
                        Jets1.pfc28_energy    = jet1['E_28'][i]
                        Jets1.pfc28_px        = jet1['PX_28'][i]
                        Jets1.pfc28_py        = jet1['PY_28'][i]
                        Jets1.pfc28_pz        = jet1['PZ_28'][i]
                        Jets1.pfc28_ifTrack   = jet1['C_28'][i]
                        Jets1.pfc28_pType     = jet1['PID_28'][i]
                        Jets1.pfc29_energy    = jet1['E_29'][i]
                        Jets1.pfc29_px        = jet1['PX_29'][i]
                        Jets1.pfc29_py        = jet1['PY_29'][i]
                        Jets1.pfc29_pz        = jet1['PZ_29'][i]
                        Jets1.pfc29_ifTrack   = jet1['C_29'][i]
                        Jets1.pfc29_pType     = jet1['PID_29'][i]
                        Jets1.pfc30_energy    = jet1['E_30'][i]
                        Jets1.pfc30_px        = jet1['PX_30'][i]
                        Jets1.pfc30_py        = jet1['PY_30'][i]
                        Jets1.pfc30_pz        = jet1['PZ_30'][i]
                        Jets1.pfc30_ifTrack   = jet1['C_30'][i]
                        Jets1.pfc30_pType     = jet1['PID_30'][i]
                        Jets1.pfc31_energy    = jet1['E_31'][i]
                        Jets1.pfc31_px        = jet1['PX_31'][i]
                        Jets1.pfc31_py        = jet1['PY_31'][i]
                        Jets1.pfc31_pz        = jet1['PZ_31'][i]
                        Jets1.pfc31_ifTrack   = jet1['C_31'][i]
                        Jets1.pfc31_pType     = jet1['PID_31'][i]
                        Jets1.pfc32_energy    = jet1['E_32'][i]
                        Jets1.pfc32_px        = jet1['PX_32'][i]
                        Jets1.pfc32_py        = jet1['PY_32'][i]
                        Jets1.pfc32_pz        = jet1['PZ_32'][i]
                        Jets1.pfc32_ifTrack   = jet1['C_32'][i]
                        Jets1.pfc32_pType     = jet1['PID_32'][i]
                        Jets1.pfc33_energy    = jet1['E_33'][i]
                        Jets1.pfc33_px        = jet1['PX_33'][i]
                        Jets1.pfc33_py        = jet1['PY_33'][i]
                        Jets1.pfc33_pz        = jet1['PZ_33'][i]
                        Jets1.pfc33_ifTrack   = jet1['C_33'][i]
                        Jets1.pfc33_pType     = jet1['PID_33'][i]
                        Jets1.pfc34_energy    = jet1['E_34'][i]
                        Jets1.pfc34_px        = jet1['PX_34'][i]
                        Jets1.pfc34_py        = jet1['PY_34'][i]
                        Jets1.pfc34_pz        = jet1['PZ_34'][i]
                        Jets1.pfc34_ifTrack   = jet1['C_34'][i]
                        Jets1.pfc34_pType     = jet1['PID_34'][i]
                        Jets1.pfc35_energy    = jet1['E_35'][i]
                        Jets1.pfc35_px        = jet1['PX_35'][i]
                        Jets1.pfc35_py        = jet1['PY_35'][i]
                        Jets1.pfc35_pz        = jet1['PZ_35'][i]
                        Jets1.pfc35_ifTrack   = jet1['C_35'][i]
                        Jets1.pfc35_pType     = jet1['PID_35'][i]
                        Jets1.pfc36_energy    = jet1['E_36'][i]
                        Jets1.pfc36_px        = jet1['PX_36'][i]
                        Jets1.pfc36_py        = jet1['PY_36'][i]
                        Jets1.pfc36_pz        = jet1['PZ_36'][i]
                        Jets1.pfc36_ifTrack   = jet1['C_36'][i]
                        Jets1.pfc36_pType     = jet1['PID_36'][i]
                        Jets1.pfc37_energy    = jet1['E_37'][i]
                        Jets1.pfc37_px        = jet1['PX_37'][i]
                        Jets1.pfc37_py        = jet1['PY_37'][i]
                        Jets1.pfc37_pz        = jet1['PZ_37'][i]
                        Jets1.pfc37_ifTrack   = jet1['C_37'][i]
                        Jets1.pfc37_pType     = jet1['PID_37'][i]
                        Jets1.pfc38_energy    = jet1['E_38'][i]
                        Jets1.pfc38_px        = jet1['PX_38'][i]
                        Jets1.pfc38_py        = jet1['PY_38'][i]
                        Jets1.pfc38_pz        = jet1['PZ_38'][i]
                        Jets1.pfc38_ifTrack   = jet1['C_38'][i]
                        Jets1.pfc38_pType     = jet1['PID_38'][i]
                        Jets1.pfc39_energy    = jet1['E_39'][i]
                        Jets1.pfc39_px        = jet1['PX_39'][i]
                        Jets1.pfc39_py        = jet1['PY_39'][i]
                        Jets1.pfc39_pz        = jet1['PZ_39'][i]
                        Jets1.pfc39_ifTrack   = jet1['C_39'][i]
                        Jets1.pfc39_pType     = jet1['PID_39'][i]
                        Jets1.pfc40_energy    = jet1['E_40'][i]
                        Jets1.pfc40_px        = jet1['PX_40'][i]
                        Jets1.pfc40_py        = jet1['PY_40'][i]
                        Jets1.pfc40_pz        = jet1['PZ_40'][i]
                        Jets1.pfc40_ifTrack   = jet1['C_40'][i]
                        Jets1.pfc40_pType     = jet1['PID_40'][i]


                newTree.Fill()

        #########################################################  
        if i%ti == 1 and i>ti:
            end = timer() 
            dt = end-start
            tl = int( ((NofEntries-i)/ti ) * dt )
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
        skim_c(ss,nFn)
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
