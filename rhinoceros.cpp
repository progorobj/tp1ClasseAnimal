#include "rhinoceros.h"


Rhinoceros::Rhinoceros(std::string un_nom , double un_poids,int un_espace) : Animal(un_nom,un_poids){
            
            this->espace= un_espace;    
            }
            
void Rhinoceros::ajouterDiete(Diete* le_diete){
    
    this->setDiete(le_diete);
    this->getDiete()->setPoidsFruits(this->getPoids()*0.005);
                           
   if(this->espace<2000)
     {
         this->getDiete()->setPoidsHerbes(0.02*this->getPoids()-20);
       }
    }

void Rhinoceros::afficherAnimal(){
    std::cout<<"Rhinoceros : "<<this->getNom()<<" ("<<this->getPoids()<<" Kg) "<<std::endl;
    if(this->espace<2000){
        std::cout<<"  Enclos de 2000 metres-carres"<<std::endl;
    }
    else {
        std::cout<<"  Enclos de "<<this->espace<<" metres-carres"<<std::endl;    
    }
    std::cout<<"  Mange "<<this->getDiete()->getPoidsViande() <<" Kg de viande par jour "<<std::endl;
    std::cout<<"  Mange "<<this->getDiete()->getPoidsFruits()<<" Kg de fruits par jour "<<std::endl;
    std::cout<<"  Mange "<<this->getDiete()->getPoidsHerbes() <<" kg d'herbe par jour"<<std::endl;
    }
    
    