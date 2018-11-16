import os

ctauL = [100,500,1000,2000,5000]
massL = [x for x in range(15,65,5)]
print ctauL
print massL

runCommStr  = 'python rootVect2h5.py ' 
sgnOnStr    = ' -s 1 '
massCommStr = ' --mass '
ctauCommStr = ' --ct '


#for i in massL:    os.system( runCommStr + sgnOnStr + massCommStr + str(i) )
for i in ctauL:    os.system( runCommStr + sgnOnStr + massCommStr + '40' + ctauCommStr + str(i) )

