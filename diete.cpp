#include "diete.h"

Diete:: Diete( ){
    this->p_viand= 0;
    this->p_fruits= 0;
    this->p_herbes= 0;
    
    }
    
void Diete::setPoidsViande(double qte_viande){
    this->p_viand=qte_viande;
    
    }
    
void Diete::setPoidsFruits(double qte_fruits){
    this->p_fruits=qte_fruits;
    }
    
void Diete::setPoidsHerbes(double qte_herbes){
    this->p_herbes = qte_herbes;
    }
    
double Diete::getPoidsViande(){
    
    return this->p_viand;
    }
    
double Diete::getPoidsFruits(){
    return this->p_fruits;
    }
    
double Diete::getPoidsHerbes(){
    return this->p_herbes;
    
    }
    
