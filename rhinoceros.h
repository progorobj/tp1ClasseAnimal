#ifndef __RHINOCEROS_H__
#define __RHINOCEROS_H__

#include <iostream>
#include "animal.h"
#include <string>


class Rhinoceros : public Animal{

    private:
            int espace;
    public :
            Rhinoceros(std::string un_nom , double un_poids,int espace);
             //Méthode herité de la classe Animal qui permet d'afficher le contenu de l'obet Rhinoceros
            void afficherAnimal();
             //Méthode herité de la classe Animal qui permet d'ajouter une Diete propre à la classe Rhinoceros
            void ajouterDiete(Diete* le_diete);
       
};


#endif