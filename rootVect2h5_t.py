import os, sys
sys.path.append('./Tools/')
sys.path.append('./Templates/')
import multiprocessing as mp
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
from ROOT import JetType, JetTypeSmall, JetTypePFC_fourVect, JetTypePFC_fiveVect, JetTypePFC_sixVect
Js = JetType()

from time import time as tm
import root_numpy     as rnp
import numpy          as np


#################
# settings      #
#################
#path               = '/beegfs/desy/user/hezhiyua/backed/fromLisa/fromLisaLLP//'
path              = '/beegfs/desy/user/hezhiyua/backed/dustData/'+'crab_folder_v2/'#'/home/brian/datas/roottest/'
inName            = 'VBFH_HToSSTobbbb_MH-125_MS-40_ctauS-500_jetOnly.root'
num_of_jets           = 1#3#1#4
testOn                = 0
nonLeadingJetsOn      = 0#1
nLimit                = 1000000000000#100000#1000000
numOfEntriesToScan    = 100 #only when testOn = 1
NumOfVecEl            = 6
Npfc                  = 40
#scanDepth            = 44
vectName              = 'MatchedCHSJet1' #'Jets'
#adjusted for different oldfile location
path_out    = '/beegfs/desy/user/hezhiyua/2bBacked/skimmed/skim_output/'
versionN_b  = 'TuneCUETP8M1_13TeV-madgraphMLM-pythia8-v1'
versionN_s  = 'TuneCUETP8M1_13TeV-powheg-pythia8_PRIVATE-MC'
HT          = '50'
lola_on     = 0 # 1: prepared for lola
ct_dep      = 0 #1 for ct dependence comparison
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


forBDT    = structure(model='bdt' , nConstit=num_of_jets, preStr='J'          )
forLola   = structure(model='lola', nConstit=40         , dimOfVect=NumOfVecEl)
forBDT.Objh()
forLola.Objh()


if   ct_dep == 0:
    matchOn = 0
    if   '50'   == HT: channel = {'QCD':'QCD_HT50to100_'    + versionN_b + '.root'}
    elif '100'  == HT: channel = {'QCD':'QCD_HT100to200_'   + versionN_b + '.root'}
    elif '200'  == HT: channel = {'QCD':'QCD_HT200to300_'   + versionN_b + '.root'}
    elif '300'  == HT: channel = {'QCD':'QCD_HT300to500_'   + versionN_b + '.root'}
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
if   cut_on == 1: print '\nCuts:\n',condition_str
elif cut_on == 0: print 'no cut applied~'
#---------------------------------------------------------------------------------------------------------------------------------
#######################################
if   nonLeadingJetsOn == 0:    whichJetStr = 'k==1' # k==0????
elif nonLeadingJetsOn == 1:    whichJetStr = 'k>=1' # k>=0????
#######################################





tA = tm()
if lola_on == 1:
    inName = channel['ct500']#channel['QCD']#''#[for i in channel: channel[i]][0]

    j1Entry  = []
    j1Num    = []
    pan      = []
    f1       = TFile( path + inName , "r" )
    tin      = f1.Get('ntuple/tree')
    NumE     = tin.GetEntriesFast()
    print '\nEntries: ', NumE
    s_cut         = 1000#None#100
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
            if x[i] <= 40:    ord_dic[x[i]] = i
        cc = 1
        for key, item in ord_dic.iteritems():
            if cc == key:    order.append(item) 
            cc += 1
        leng = len(order)
        if leng < 40:    order = order + (40-leng)*[-1]
        return order
   
    def pick_top(x, default_val):
        order   = []
        for i in xrange(40):
            i_col = x['o'+str(i)] 
            if pd.isnull(i_col):    break
            elif i_col == -1   :    order.append(default_val) 
            else               :    order.append( x[i_col] )
        return order 

    n_col            = pt_rank.shape[1] 
    order_pt         = pt_rank.apply(lambda row: ordering(row, n_col), axis=1)
    order_df         = pd.DataFrame.from_records( order_pt.values.tolist() )
    order_df.columns = [ 'o'+str(i) for i in range(40) ]
    df_ord           = {}
    pan_list         = []
    attr_list        = ['energy','px','py','pz','c','pdgId','pt'] # pt not needed here
    
    for a in attr_list[:NumOfVecEl]: # to be checked!!!
        if   a == 'c'    :    def_val = -1
        elif a == 'pdgId':    def_val = -1 
        else             :    def_val = 0
        tmp_df_ord   = pd.concat( [df_dict[a].copy(), order_df.copy()], axis=1)
        df_ord_list  = tmp_df_ord.apply(lambda row: pick_top(row, def_val), axis=1)
        df_ord[a]    = pd.DataFrame.from_records( df_ord_list.values.tolist() )
        pan_list.append(df_ord[a])
    #print df_ord['pt'][:8]
    pan         = pd.concat(pan_list, axis=1)
    forLola.panColNameListGen()
    colN        = forLola.panColNameList
    pan.columns = colN
    print pan[:8]
tB = tm()
print 'Time: ', str(tB-tA), 'sec'
exit()




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
        
    attr     = forBDT.preList + forBDT.attrTypeList
    attr_out = forLola.attrTypeList
    startTemp=0   
    #theweight = oldTree.GetWeight() 
    
    #def FillTrees(i):
    for i in xrange(0, numOfEntriesToScan_local):    
        start     = showTimeLeft(ii=i,mode='s',startTime=startTemp)
        startTemp = start

        oldTree.GetEntry(i)
        # selections
      
        if lola_on == 0:      
            passB = 0
            for k in xrange( oldTree.Jets.size() ):

                if num_of_jets == 1:
                    if not eval(whichJetStr)        : continue
                else               :  
                    if not (k>=1 and k<=num_of_jets): continue 
                
                if cut_on == 1:                       
                    if not eval( condition_str ): 
                        for stri in attr:
                            strTemp = 'J'+str(k)+''+stri 
                            if   stri == 'eta' or stri == 'phi': dfv = -9.    
                            else                               : dfv = -1.  
                            setattr( Jets1, strTemp , dfv ) 
                        continue    
                    
                passB = 1 
                for stri in attr:
                    strTemp = 'J'+str(k)+''+stri 
                    setattr( Jets1 , strTemp , fillingValue )                
            if passB == 1:
                newTree.Fill()    

                    
        elif lola_on == 1:
            for ii in xrange(forLola.nConstit):
                for strO in attr_out:
                    tempAttrStrO = 'pfc' + str(ii+1) + '_' + strO
                    tempAttrStrI =  forLola.attrNameDic[strO] + '_' + str(ii+1)
                    setattr( Jets1 , tempAttrStrO , jet1[tempAttrStrI][i] )
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
