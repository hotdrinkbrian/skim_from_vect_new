import os


massL = [x for x in range(15,60,5)]
print massL

runCommStr  = 'python rootVect2h5.py ' 
sgnOnStr    = '-s 1 '
massCommStr = '--mass '


for i in massL:
    os.system( runCommStr + sgnOnStr + massCommStr + str(i) )


