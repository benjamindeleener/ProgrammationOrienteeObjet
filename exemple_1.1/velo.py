class Velo:
    def __init__(self, couleur="rose"):
        self.__couleur = couleur
        self.__position = 0
        self.__vitesse = 0
        
        self.__roue1 = None;
        self.__roue2 = None;
        self.__passager = None;
    
    def getCouleur(self):
        return self.__couleur
    
    def getPosition(self):
        return self.__position
    
    def getVitesse(self):
        return self.__vitesse
    
    def avance(self):
        self.__position += self.__vitesse
        print("Mon velo avance a une vitesse de: {}".format(self.__vitesse))
        
    def recule(self):
        print("Reculer avec un velo n'est pas une bonne idee!")
        
    def accelere(self):
        self.__vitesse += 1
        
    def freine(self):
        self.__vitesse -= 1
    