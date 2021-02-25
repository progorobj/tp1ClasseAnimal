#include "singe.h"

Singe::Singe(std::string le_nom , double le_poids,int l_enclos) : Animal(le_nom,le_poids){
    
    this->un_enclos=l_enclos;
   
    }
    
void Singe::ajouterDiete(Diete* le_diete){
    
    this->setDiete(le_diete);
    this->getDiete()->setPoidsViande(this->getPoids()*0.01);
    this->getDiete()->setPoidsFruits(this->getPoids()*0.01);
    
   if(this->un_enclos==0){
         this->getDiete()->setPoidsHerbes(this->getPoids()*0.005);
       }
    }
    
    
void Singe::afficherAnimal(){
        std::cout<<"Singe : "<<this->getNom()<<" ("<<this->getPoids()<<" Kg) "<<std::endl;
        if(this->un_enclos==0)
        {
            std::cout<<"  Enclos sans herbe"<<std::endl;
            }
        else if(this->un_enclos==1)
        {
            std::cout<<"  Enclos avec herbe"<<std::endl;
            }
        
        std::cout<<"  Mange "<<this->getDiete()->getPoidsViande() <<" Kg de viande par jour "<<std::endl;
        std::cout<<"  Mange "<<this->getDiete()->getPoidsFruits()<<" Kg de fruits par jour "<<std::endl;
        std::cout<<"  Mange "<<this->getDiete()->getPoidsHerbes() <<" kg d'herbe par jour"<<std::endl;
    }

