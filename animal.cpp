#include "animal.h"



Animal::Animal(std::string le_nom,double le_poids){
    
    this->nom=le_nom;
    this->poids=le_poids;
   
    }
    
void Animal::setDiete(Diete* le_diete){
    
    this->diete= le_diete;
    }
    
std::string Animal::getNom(){
    return this->nom;
    }
    
    
double Animal::getPoids(){
    return this->poids;
    
    }
    
Diete* Animal::getDiete(){
     
     return this->diete;
     }
     
Animal::~Animal(){
        
        };