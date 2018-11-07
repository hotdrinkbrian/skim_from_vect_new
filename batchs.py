import sys,os


massL = [x for x in range(15,60,5)]
print massL


for i in massL:
    os.system('python rootVect2h5.py -s 1 --mass ' + str(i))


