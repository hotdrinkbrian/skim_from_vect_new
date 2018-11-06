
class structure:

    def __init__(self, model='bdt', imageOn=0, nConstit=40, dimOfVect=4, preStr='pfc'):
        self.model = model
        self.kinList     = ['pt','mass','energy']
        self.preList     = ['pt','eta','phi','mass','energy']
        self.defaultType = 'float'
        self.preStr      = preStr
        self.typTransDic = {'float':'F','int':'I'}
        self.attrNameDic = {'energy': 'E','px':'PX','py':'PY','pz':'PZ','ifTrack':'C','pType':'PID'}


        if self.model == 'bdt':
            self.imageOn      = 0
            self.defaultValue = -1.
            self.attrList     = ['cHadE','nHadE','cHadEFrac','nHadEFrac','nEmE','nEmEFrac','cEmE','cEmEFrac','cmuE','cmuEFrac','muE','muEFrac','eleE','eleEFrac','eleMulti','photonE','photonEFrac','photonMulti','cHadMulti','nHadMulti','npr','cMulti','nMulti','FracCal']
            self.attrDict     = {}

            for stri in self.attrList:
                self.attrDict[stri] = {}
                self.attrDict[stri]['Type'] = self.defaultType
                self.attrDict[stri]['defaultValue'] = self.defaultValue

        elif self.model == 'lola':
            self.imageOn      = imageOn
            self.nConstit     = nConstit
            self.dimOfVect    = dimOfVect
            self.defaultValue = 0.
            self.attrTypeList = ['energy','px','py','pz']
            self.attrTypeDict = {}
            
            for stri in self.attrTypeList:
                self.attrTypeDict[stri]                 = {}
                self.attrTypeDict[stri]['Type']         = self.defaultType
                self.attrTypeDict[stri]['defaultValue'] = self.defaultValue
                
            if self.dimOfVect == 5:
                self.attrTypeList.append( 'ifTrack' )
                self.attrTypeDict['ifTrack']                 = {}
                self.attrTypeDict['ifTrack']['Type']         = 'int'
                self.attrTypeDict['ifTrack']['defaultValue'] = -1
            elif self.dimOfVect == 6:
                self.attrTypeList.append( 'ifTrack' )
                self.attrTypeList.append( 'pType' )
                self.attrTypeDict['ifTrack']                 = {}
                self.attrTypeDict['pType']                   = {}
                self.attrTypeDict['ifTrack']['Type']         = 'int'
                self.attrTypeDict['ifTrack']['defaultValue'] = -1
                self.attrTypeDict['pType']['Type']           = 'int'
                self.attrTypeDict['pType']['defaultValue']   = 0                        


    def setDefaultValue(self,newDict):
            for stri in newDict:
                self.attrDict[stri]['defaultValue'] = newDict[stri]


    def setType(self,newDict):
            for stri in newDict:
                if newDict[stri] not in ['float','int']:
                    print '__________________The given type is not valid!'
                else:
                    self.attrDict[stri]['Type'] = newDict[stri]


    def branchLeafStrGen(self):
        strTrain = ''

        if self.model == 'bdt':
            for stri in self.preList:
                strTrain += stri + '/' + 'F' + ':'
            for stri in self.attrList:
                tempType = self.typTransDic[ self.attrDict[stri]['Type'] ]
                strTrain += stri + '/' + tempType + ':'

        elif self.model == 'lola':            
            for i in range(self.nConstit):
                for stri in self.attrTypeList:
                    tempType = self.typTransDic[ self.attrTypeDict[stri]['Type'] ] 
                    strTrain += self.preStr + str(i+1) + '_' + stri + '/' + tempType + ':'

        self.branchLeafStr = strTrain[:-1]
        

    def panColNameListGen(self):
        panColNameList = []
        for a in self.attrTypeList:
            pStr = self.attrNameDic[a]
            for i in range(self.nConstit):
                panColNameList.append( pStr + '_' + str(i+1) )
        self.panColNameList = panColNameList


    def setAttrList(self,inStr):
        self.attrList = inStr
        self.attrDict = {}
        for stri in self.attrList:
                self.attrDict[stri]                 = {}
                self.attrDict[stri]['Type']         = self.defaultType
                self.attrDict[stri]['defaultValue'] = -1.
    
        











