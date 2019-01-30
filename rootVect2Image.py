import os, sys
sys.path.append('./Tools/')
sys.path.append('./Templates/')
import multiprocessing as mp
import copy
import math
import argparse
from array import array
from time import time as tm
#import root_numpy     as rnp
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
Npfc                  = 400#40
# <<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<< adjusted for different oldfile location
#path_out    = '/beegfs/desy/user/hezhiyua/2bBacked/skimmed/skim_output/'
#path_out    = '/beegfs/desy/user/hezhiyua/2bBacked/skimmed/Skim/fromBrian_forBDT/' 
#path_out    = '/beegfs/desy/user/hezhiyua/2bBacked/skimmed/Skim/fromBrian_forLola/large_sgn/'
path_out    = '/beegfs/desy/user/hezhiyua/2bBacked/skimmed/Skim/fromBrian_for2d/pfc_400/large_sgn/'
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


import root_numpy      as rnp
from sklearn.externals import joblib


tA = tm()
#if lola_on == 1:
def run_i(inName):
    #inName   = [ channel[i] for i in channel ][0]
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

    f1.Close()

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
        jet_one    = df_dict['jetInd']     == 0 #1? >>>> 0:leading jet
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
            i_col = int( x['o'+str(i)] )
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
    print 'Events: ', len(pan[:])
    joblib.dump(pan,path_out+'/'+inName[:-5]+'_1j_skimed'+'.pkl')






qcd_list = ['100to200','200to300','300to500','500to700','700to1000','1000to1500','1500to2000','2000toInf']
m_list   = [20,30,40,50]
l_list   = [500,1000,2000,5000] 

for m_i in m_list:
    for l_i in l_list:
        in_name = 'VBFH_HToSSTobbbb_MH-125_MS-' + str(m_i) + '_ctauS-' + str(l_i) + '_' + versionN_s + '.root'
        run_i(in_name)

#"""
for qcd_i in qcd_list:
    in_name = 'QCD_HT'+qcd_i+'_'+versionN_b+'.root'
    run_i(in_name)
#"""

tB = tm()
print 'Time: ', str(tB-tA), 'sec'



#xs = { '50to100': 246300000 , '100to200': 28060000 , '200to300': 1710000 , '300to500': 351300 , '500to700': 31630 , '700to1000': 6802 , '1000to1500': 1206 , '1500to2000': 120.4 , '2000toInf': 25.25 , 'sgn': 3.782 }
















