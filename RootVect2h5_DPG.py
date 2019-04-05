import os, sys
sys.path.append('./Tools/')
sys.path.append('./Templates/')
import copy
import math
import argparse
from array import array
import pandas as pd
from tools import ptrank, padd, showTimeLeft
from templates import *
from ROOT import ROOT, gROOT, TDirectory, TFile, gFile, TBranch, TLeaf, TTree
from ROOT import AddressOf
pwd = os.popen('pwd').read()
pwd = pwd.split('\n')[0]
pl = '.L ' + pwd + '/Objects' + '/Objects_m1.h+'
gROOT.ProcessLine(pl)
from ROOT import JetType
Js = JetType()


import numpy as np


#################
# settings      #
#################
path               = '/beegfs/desy/user/hezhiyua/backed/fromLisa/energyCorrected/'
#path               = '/beegfs/desy/user/hezhiyua/backed/fromLisa/fromBrianLLP/'
Npfc               = 40#400#40
#vectName           = 'Jets'

sgn_on   = 0
#jetIndx  = 3
#jetIndx  = 2
jetIndx  = 1
#jetIndx  = 0

drop_nan = 1

#adjusted for different oldfile location
path_out    = '/beegfs/desy/user/hezhiyua/2bBacked/skimmed/LLP/allInOne/raw/out/root/'
versionN_b  = 'TuneCUETP8M1_13TeV-madgraphMLM-pythia8-v1'
versionN_s  = 'TuneCUETP8M1_13TeV-powheg-pythia8_Tranche2_PRIVATE-MC'
HT          = '100'

pars = argparse.ArgumentParser()
pars.add_argument('--ht'    ,action='store',type=int,help='specify HT of the QCD file')
pars.add_argument('-s'      ,action='store',type=int,help='specify if for VBF file')
pars.add_argument('--model' ,action='store',type=str,help='specify model')
pars.add_argument('--ct'    ,action='store',type=int,help='specify signal ctau')
pars.add_argument('--mass'  ,action='store',type=int,help='specify signal mass')
args = pars.parse_args()
if args.ht  :    HT          = str( args.ht ) 
if args.s   :    sgn_on      = args.s
if args.ct  :    sgn_ctau    = args.ct
if args.mass:    sgn_mass    = args.mass




if  sgn_on == 0:
    if   '50'  == HT: channel = {'QCD':'QCD_HT50to100_'  + versionN_b + '.root'}
    elif '100' == HT: channel = {'QCD':'QCD_HT100to200_' + versionN_b + '.root'}
    elif '200' == HT: channel = {'QCD':'QCD_HT200to300_' + versionN_b + '.root'}
    elif '300' == HT: channel = {'QCD':'QCD_HT300to500_' + versionN_b + '.root'}
    elif '500'  == HT: channel = {'QCD':'QCD_HT500to700_'   + versionN_b + '.root'}
    elif '700'  == HT: channel = {'QCD':'QCD_HT700to1000_'  + versionN_b + '.root'}
    elif '1000' == HT: channel = {'QCD':'QCD_HT1000to1500_' + versionN_b + '.root'}
    elif '1500' == HT: channel = {'QCD':'QCD_HT1500to2000_' + versionN_b + '.root'}
    elif '2000' == HT: channel = {'QCD':'QCD_HT2000toInf_'  + versionN_b + '.root'}
elif sgn_on == 1:
    life_time = [str(sgn_ctau)]
    channel = {}
    for lt in life_time:
        #channel['ct' + lt] = 'VBFH_HToSSTobbbb_MH-125_MS-' + str(sgn_mass) + '_ctauS-' + lt + '_' + versionN_s + '.root'
        inName = 'VBFH_HToSSTobbbb_MH-125_MS-' + str(sgn_mass) + '_ctauS-' + lt + '_' + versionN_s + '.root' 

#-------------------------------------
#-------------------------------------


bdt_attrs    = ['nTrackConstituents','nTracks3PixelHits','cHadMulti','nHadMulti','npr','nSelectedTracks','cMulti','nEmEFrac','ecalE','photonEFrac','nHadEFrac','cHadEFrac','mass','pt','energy']

pan = []

if 1:
    if not sgn_on:    inName  = channel['QCD']
    else         :    pass#inName  = channel['']

    f1       = TFile( path + inName , "r" )
    t1       = f1.Get('ntuple/tree')

    NumE     = t1.GetEntriesFast()
    print '\nEntries: ', NumE

    b1       = t1.GetBranch('PFCandidates')
    b2       = t1.GetBranch('Jets')

    nEntries = b1.GetEntries()

    nr       = 0
    for entry in t1:
        #print '~~~~~~~~~~next entry:' + str(nr)
        jet_store = {} 
        for attr_i in bdt_attrs:    jet_store[attr_i] = b2.FindBranch('Jets.'+attr_i).GetValue(jetIndx,1) 
        jEta   = b2.FindBranch('Jets.eta').GetValue(jetIndx,1)
        #jMatch = b2.FindBranch('Jets.isGenMatched').GetValue(jetIndx,1)
        if sgn_on: 
            jMatch = b2.FindBranch('Jets.isGenMatched').GetValue(jetIndx,1)
            if not (jEta>-2.4) & (jEta<2.4) & (jet_store['pt']>15) & (jMatch==1):    continue
        else     :
            if not (jEta>-2.4) & (jEta<2.4) & (jet_store['pt']>15)              :    continue
        #print '>>>>>>>'
        #print 'Stored energy: ', jet_store['energy']


        trigger_str = '(t1.HLT_VBF_DisplacedJet40_VTightID_Hadronic_v or t1.HLT_VBF_DisplacedJet40_VVTightID_Hadronic_v) and (t1.Flag_eeBadScFilter if t1.isMC else 1) and (t1.Flag_EcalDeadCellTriggerPrimitiveFilter and t1.Flag_HBHENoiseFilter and t1.Flag_HBHENoiseIsoFilter and t1.Flag_globalTightHalo2016Filter and t1.Flag_goodVertices and t1.Flag_BadPFMuon and t1.Flag_BadChCand) and t1.isVBF and t1.HT>100'        
        if not eval( trigger_str ):    continue


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

        #j1Entry  = [] 
        j1E       = [] 
        j1PX      = []
        j1PY      = []
        j1PZ      = []
        j1C       = []
        j1PID     = []
        j1M       = []
 
        j1H       = []

        scanDepth = E.GetNdata()

        for num in xrange(0, scanDepth):
            if jetInd.GetValue(num,1) == jetIndx:
                #j1Entry.append(nr)
                j1E.append(E.GetValue(num,1))
                j1PX.append(PX.GetValue(num,1))
                j1PY.append(PY.GetValue(num,1))
                j1PZ.append(PZ.GetValue(num,1))
                j1C.append( int(C.GetValue(num,1)) ) 
                #print E.GetValue(num,1)
                
                PID_i = int(PID.GetValue(num,1))    
                #j1PID.append( int(PID.GetValue(num,1)) )
                if ( np.abs(PID_i) > 100 ) & ( np.abs(PID_i) != 310 ):    j1H.append(1)
                else                                                 :    j1H.append(0) 
                #j1M.append(M.GetValue(num,1))
     
        jet_energy_calc = np.array(j1E)
        #print 'PFC calculated energy: ', jet_energy_calc.sum()


        tempE  , _, _ = ptrank( j1PX, j1PY, j1E   , n_pfc=Npfc)
        tempPX , _, _ = ptrank( j1PX, j1PY, j1PX  , n_pfc=Npfc)
        tempPY , _, _ = ptrank( j1PX, j1PY, j1PY  , n_pfc=Npfc)
        tempPZ , _, _ = ptrank( j1PX, j1PY, j1PZ  , n_pfc=Npfc)
        tempC  , _, _ = ptrank( j1PX, j1PY, j1C   , n_pfc=Npfc) 
        #tempPID, _, _ = ptrank( j1PX, j1PY, j1PID , n_pfc=Npfc)
        tempH, _, _ = ptrank( j1PX, j1PY, j1H , n_pfc=Npfc)
        #tempM, _, _ = ptrank( j1PX, j1PY, j1M , n_pfc=Npfc)
        #print tempN
        #print tempPT
        tE   = padd(tempE  ,  0, Npfc)
        tPX  = padd(tempPX ,  0, Npfc)    
        tPY  = padd(tempPY ,  0, Npfc)
        tPZ  = padd(tempPZ ,  0, Npfc)
        tC   = padd(tempC  , -1, Npfc)
        #tPID = padd(tempPID, -1, Npfc)
        tH  = padd(tempH , 0, Npfc)
        #tM  = padd(tempM , 0, Npfc)
    
    
        if 1:
            #Npfc = 40       
            tt                = [4444]*Npfc*6
            tt[Npfc*0:Npfc*1] = tE 
            tt[Npfc*1:Npfc*2] = tPX 
            tt[Npfc*2:Npfc*3] = tPY  
            tt[Npfc*3:Npfc*4] = tPZ 
            tt[Npfc*4:Npfc*5] = tC 
            tt[Npfc*5:Npfc*6] = tH
            #tt[40*5:40*6] = tPID 

        for attr_i in bdt_attrs:    tt.append(jet_store[attr_i])
       
        pan.append(tt)
        
       

        #if nr == numOfEntriesToScan: break     

    print 'num of entries before skimming: ' + str(nEntries)   
    print 'num of entries after skimming: ' + str(nr)  

    colN = []
    LST  = ['E','PX','PY','PZ','C','H']
    for j in LST:
        for i in range(Npfc):
            str_i = j+'_'+str(i) 
            colN.append(str_i)
  
    for attr_i in bdt_attrs:    colN.append(attr_i) 
    print colN


    PAN     = pd.DataFrame(pan, columns=colN)  

    jet_idx = jetIndx
    #exit()
    PAN.to_hdf(path_out+'/'+inName[:-5]+'_j'+str(jet_idx)+'_pfc_skimed'+'.h5', key='df', mode='w', dropna=drop_nan)















