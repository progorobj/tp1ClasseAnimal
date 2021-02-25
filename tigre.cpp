#include "tigre.h"

Tigre::Tigre(std::string nom_tigre , double poids_tigre) : Animal(nom_tigre, poids_tigre){
       
        }
        
void Tigre::ajouterDiete(Diete* le_diete){
    
    this->setDiete(le_diete);
    this->getDiete()->setPoidsViande(this->getPoids()*0.05);
    
    }


void Tigre::afficherAnimal(){
    std::cout<<"Tigre : "<<this->getNom()<<" ("<<this->getPoids()<<" Kg) "<<std::endl;
    std::cout<<"  Mange "<<this->getDiete()->getPoidsViande() <<" Kg de viande par jour "<<std::endl;
    std::cout<<"  Mange "<<this->getDiete()->getPoidsFruits()<<" Kg de fruits par jour "<<std::endl;
    std::cout<<"  Mange "<<this->getDiete()->getPoidsHerbes() <<" kg d'herbe par jour"<<std::endl;
    }
    

    
    
   