#ifndef __TIGRE_H_
#define __TIGRE_H_

#include <iostream>
#include "animal.h"
#include <string>

//Class Tigre
class Tigre : public Animal {
    
    public:
        Tigre(std::string nom_tigre , double poids_tigre) ;
        //Méthode herité de la classe Animal qui permet d'afficher le contenu de l'obet Tigre
        void afficherAnimal();
        //Méthode herité de la classe Animal et qui Permet d'ajouter une Diete propre à la classe Tigre
        void ajouterDiete(Diete* le_diete);
        
    };
    
    
#endif