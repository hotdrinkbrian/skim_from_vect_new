import os

ctauL = [500,1000,2000,5000]
massL = [20,30,40,50]#[x for x in range(15,65,5)]
print ctauL
print massL

runCommStr  = 'python RootVect2h5_DPG.py ' 
sgnOnStr    = ' -s 1 '
massCommStr = ' --mass '
ctauCommStr = ' --ct '


for i in ctauL:    
    for j in massL:
        os.system( runCommStr + sgnOnStr + massCommStr + str(j) + ctauCommStr + str(i) )














