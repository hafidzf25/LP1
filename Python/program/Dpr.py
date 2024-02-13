# Deklarasi Class

class Dpr:

    # Privat (__), Protected (_), Public Atributes
    __name = ""
    __id = ""
    __bidang = ""
    __partai = ""

    # Konstruktor
    def __init__(self, name = "", id = "", bidang = "", partai = ""):
        self.__name = name
        self.__id = id
        self.__bidang = bidang
        self.__partai = partai

    # Getter dan Setter
        
    # Get Name
    def getName(self):
        return self.__name
    
    # Set Name
    def setName(self, name):
        self.__name = name

    # Get Id
    def getId(self):
        return self.__id
    
    # Set Id
    def setId(self, id):
        self.__id = id

    # Get Bidang
    def getBidang(self):
        return self.__bidang
    
    # Set Bidang
    def setBidang(self, bidang):
        self.__bidang = bidang

    # Get Partai
    def getPartai(self):
        return self.__partai
    
    # Set Partai
    def setPartai(self, partai):
        self.__partai = partai