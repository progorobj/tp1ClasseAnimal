#ifndef __PARC_H__
#define __PARC_H__
#include <iostream>
#include "animal.h"

class Parc{
    
    private:
        Animal* animal=NULL;
    public:
        Parc();     
         //Méthode qui permet d'ajouter un animal dans um objet de la classe Parc    
        void ajouterAnimal(Animal* un_animal);
        void afficherAnimalParc(Animal* un_animal);
        Animal* getAnimal();
        //Méthode qui permet d'afficher le total des dietes de tout les animaux qui se trouve dans le parc
        void totalDiete(int Taille,Animal* animal[]);
      
    };
#endif