#!/bin/python2.7
#SBATCH --partition=all
#SBATCH --time=24:00:00
#SBATCH --nodes=1
#SBATCH --job-name skimming
#SBATCH --output /home/hezhiyua/logs/skimming-%j.out
#SBATCH --error /home/hezhiyua/logs/skimming-%j.err
#SBATCH --mail-type END
#SBATCH --mail-user zhiyuan.he@desy.de

from os import system as act
import sys
#qcd_list = ['100to200','200to300','300to500','500to700','700to1000','1000to1500','1500to2000','2000toInf']
"""
qcd_list = [200]
qcd_list = [300]
qcd_list = [500]
qcd_list = [700]
qcd_list = [1000]
qcd_list = [1500]
qcd_list = [2000]
"""
qcd_list = []
for i in range( len(sys.argv)-1 ):    qcd_list.append(sys.argv[i+1])

pth = '/home/hezhiyua/desktop/CNN_Preprocessing/ROOT_convertion/old/skim_from_vect_new/'

print 'Strating ...'

for qcd_i in qcd_list:
    act('python '+pth+'RootVect2h5_DPG.py '+' --ht '+str(qcd_i))


print 'Done~'




