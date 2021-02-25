#ifndef __DIETE_H__
#define __DIETE_H__
#include <iostream>

class Diete{
    private:
        double p_viand;
        double p_fruits;
        double p_herbes;
        
    public:
        Diete( );
        //Méthode qui permet de modifier le poids du Diete en viande
        void setPoidsViande(double qte_viande);
        
        //Méthode qui permet de modifier le poids du Diete en fruits
        void setPoidsFruits(double qte_fruits);
        
        //Méthode qui permet de modifier le poids du Diete en herbes
        void setPoidsHerbes(double qte_herbes);
        
       //Méthode qui permet de récupérer la valeur du poids de la Diete en Viande
        double getPoidsViande();
        
        //Méthode qui permet de récupérer la valeur du poids de la Diete en fruits
        double getPoidsFruits();
        
        //Méthode qui permet de récupérer la valeur du poids de la Diete en herbes
        double getPoidsHerbes();
    };
#endif