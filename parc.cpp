#include "parc.h"




Parc::Parc(){
    
    }

void Parc::ajouterAnimal(Animal* un_animal){
    this->animal=un_animal;
    
    }

  void Parc::afficherAnimalParc(Animal* un_animal){
    this->animal=un_animal;
    this->animal->afficherAnimal();
} 
     
Animal* Parc::getAnimal(){
        return this->animal;
        
        }

void Parc::totalDiete(int Taille ,Animal* animal[]){
      double h=0,v=0,f=0;
      for(int i=0; i<Taille;i++)
        {
            h+=animal[i]->getDiete()->getPoidsHerbes();                            
            v+=animal[i]->getDiete()->getPoidsViande();
            f+=animal[i]->getDiete()->getPoidsFruits();
        }
        std::cout<<"Diete quotidienne totale :"<<std::endl;
        std::cout<<"  Viande :"<<v<<std::endl;
        std::cout<<"  Fruits :"<<f<<std::endl;
        std::cout<<"  Herbe :"<<h<<std::endl;
    
    }

