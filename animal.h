#ifndef __ANIMAL_H__
#define __ANIMAL_H__

#include "diete.h"
#include <iostream>
#include <string>

//Class Animal est une classe abstraite
class Animal{
    
    
private:
        std::string nom;
        double poids;
        Diete* diete=NULL;
public:
         Animal(std::string le_nom, double le_poids);
         //Methode virtual qui sera utilisé par les classes filles pour ajouter une diete
         virtual void ajouterDiete(Diete* le_diete)=0;
         //Methode virtual qui sera utilisé par les classes filles pour afficher les objets des classes filles
         virtual void afficherAnimal()=0;
         //Méthode qui permet de récupérer le nom
         std::string getNom();
         //Méthode qui permet de récupérer le poids
         double getPoids();
         //Méthode qui permet de récupérer le Diete
         Diete* getDiete(); 
         //Méthode qui permet de modifier la diete
         void setDiete(Diete* le_diete);
         virtual ~Animal(); 
        
    
    };
    #endif