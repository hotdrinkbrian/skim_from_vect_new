import math
import sys
import time
#from timeit import default_timer 
 

#==========================================================================ptrank
def ptrank( PX, PY, V, n_pfc = 40):
    nods=len(V)
    leading_pfcVect = []
    ptVect          = []
    VVect      = []
    #put pt values of all constituents of the jet in a vector ptVect
    for i in range(nods):        
        ptVect.append(  math.sqrt( PX[i]*PX[i] + PY[i]*PY[i] )  ) 
    #n_pfc is 40 if number of the constituents are greater or equal to 40, else it is equal to the number of the constituents 
    if n_pfc > nods:    n_pfc = nods  

    for j in range(n_pfc):        
        max_n   = 0
        max_pt  = -1
        #to find the max pt among those that are not put in the vector
        for i in range(nods): 
            #check if coincide with previous index
            bool_last_max = 1
            for k in range( len(leading_pfcVect) ): 
                #if the current index i is already in the leading_pfcVect: i should be skipped   
                if leading_pfcVect[k] == i:    bool_last_max = 0   
            #check if coincide with previous index
            #update the max_ variables if i corresponds to greater pt than previous max value and i not in vector leading_pfcVect 
            if (max_pt <= ptVect[i]) & bool_last_max: 
                max_n  = i
                max_pt = ptVect[i]
        #fill the leading_pfcVect with pt corrected index of the constituents  
        leading_pfcVect.append( max_n ) 
      
    #loop over the length of leading_pfcVect   
    if n_pfc > len(leading_pfcVect):    n_pfc = len(leading_pfcVect)  
 
    for j in range(n_pfc):
        #if j > len(leading_pfcVect):    break
        #fill vectors under correct pt order            
        VVect.append(  V[ leading_pfcVect[j] ]  )   
        
    return VVect, leading_pfcVect, ptVect
#==========================================================================ptrank


#=====================================padd
def padd(V, default = 0, n_pfc = 40):
    if n_pfc <= len (V):
        newV = V[:n_pfc]
    else:
        newV = [default] * n_pfc
        newV[:len(V)] = V
    return newV 
#=====================================padd        


#=================================================showTimeLeft
def showTimeLeft(ii,mode='s',startTime=0,numOfJobs=0,bigNum=800): #80000
    if   mode == 'e':
        if ii%bigNum == 1 and ii>bigNum:
            endTime = time.time()
            dt      = endTime - startTime
            tl      = int( ((numOfJobs-ii)/bigNum ) * dt ) 
            if tl > 60:    sys.stdout.write("\r" + 'time left: ' + str( tl/60 ) + 'min' )
            else      :    sys.stdout.write("\r" + 'time left: ' + 'less than 1 min')
            sys.stdout.flush()
    elif mode == 's':
        if ii == 0 or ii%bigNum == 2:    return time.time()
        else                        :    return startTime   
#=================================================showTimeLeft     
