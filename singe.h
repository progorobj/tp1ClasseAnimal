#ifndef __SINGE_H__
#define __SINGE_H__
#include "animal.h"
#include <iostream>
#include <string>


class Singe: public Animal{
    
    private :
        int un_enclos;
    public :
        Singe(std::string le_nom , double le_poids,int un_enclos);
         //Méthode herité de la classe Animal qui permet d'afficher le contenu de l'obet Singe
        void afficherAnimal();
         //Méthode herité de la classe Animal qui permet d'ajouter une Diete propre à la classe Singe
        void ajouterDiete(Diete* le_diete);
    
    };
    
#endif