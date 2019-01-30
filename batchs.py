import os

ctauL = [500,1000,2000,5000]
massL = [20,30,40,50]#[x for x in range(15,65,5)]
print ctauL
print massL

runCommStr  = 'python rootVect2h5.py ' 
sgnOnStr    = ' -s 1 '
massCommStr = ' --mass '
ctauCommStr = ' --ct '

modeStr     = ' --model lola6' #5

mm          = 40

#for i in ctauL:    os.system( runCommStr + sgnOnStr + massCommStr + str(mm) + ctauCommStr + str(i) )


for i in ctauL:    
    for j in massL:
        #os.system( runCommStr + sgnOnStr + massCommStr + str(j) + ctauCommStr + str(i) )
        os.system( runCommStr + sgnOnStr + modeStr + massCommStr + str(j) + ctauCommStr + str(i) )














