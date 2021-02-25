#include <iostream>
#include "diete.h" 
#include "parc.h"
#include "animal.h"
#include "tigre.h"
#include "rhinoceros.h"
#include "singe.h"
#include <string>

void Menu();

int main()
{
    
    int choix; 
    int Taille=0;
    std::string nom_anim;
    double poids_anim;                
    int un_espace;
    int enclos_herbe;
    
    Parc* parc1 = new Parc;
    Animal* les_animaux[250];
    Diete* la_diete[250];
    do{
        Menu();
        std::cin>>choix;
            switch(choix){
                case 1:
                        {
                           std::cout<<"Entrer le nom du tigre : " <<std::endl;
                           std::cin>>nom_anim;
                           std::cout<<"Entrer le poids du tigre : "<<std::endl;
                           std::cin>>poids_anim;
                           les_animaux[Taille]=new Tigre(nom_anim,poids_anim);  
                           la_diete[Taille]= new Diete;
                           les_animaux[Taille]->ajouterDiete(la_diete[Taille]);    
                           parc1->ajouterAnimal(les_animaux[Taille]);
                           break;
                        }
                case 2:
                        {
                           std::cout<<"Entrer le nom du singe : " <<std::endl;
                           std::cin>>nom_anim;
                           std::cout<<"Entrer le poids du singe : "<<std::endl;
                           std::cin>>poids_anim;
                           std::cout<<"Enclos avec herbes? (1-oui , 0-non)  : "<<std::endl;
                           std::cin>>enclos_herbe;
                           les_animaux[Taille]=new Singe(nom_anim,poids_anim,enclos_herbe);                           
                           la_diete[Taille]= new Diete;                          
                           les_animaux[Taille]->ajouterDiete(la_diete[Taille]);                          
                           parc1->ajouterAnimal(les_animaux[Taille]);   
                           break;
                        }
              case 3:
                        {
                           std::cout<<"Entrer le nom du Rhinoceros : " <<std::endl;
                           std::cin>>nom_anim;
                           std::cout<<"Entrer le poids du Rhinoceros : "<<std::endl;
                           std::cin>>poids_anim;
                           std::cout<<"Entrer l'espace de son enclos : "<<std::endl;
                           std::cin>>un_espace;
                           les_animaux[Taille]=new Rhinoceros(nom_anim,poids_anim,un_espace);
                           la_diete[Taille]= new Diete;
                           les_animaux[Taille]->ajouterDiete(la_diete[Taille]);
                           parc1->ajouterAnimal(les_animaux[Taille]);
                           break;
                        } 
             case 4:
                        {
                            for(int i=0; i<Taille;i++){
                                
                                parc1->afficherAnimalParc(les_animaux[i]);
                                }
                            parc1->totalDiete(Taille,les_animaux);                         
                               
                            break;
                        }                        
            case 5:
                        std::cout<<"Le programme est termine"<<std::endl;
                        break;
            default:
                        std::cout<<"Le Choix entre est invalid!"<<std::endl;
                        break;
            };
            if(choix>0 & choix<4)
                Taille++;
        }while(choix!=5);
        
        for(int i=0 ; i<Taille ; i++){
            delete les_animaux[i];
            delete la_diete[i];            
            }
        delete parc1;
}

void Menu(){
        std::cout<<"***** Menu Animal ***** "<<std::endl;
        std::cout<<"1-Ajouter un tigre avec ses informations "<<std::endl;
        std::cout<<"2-Ajouter un singe avec ses informations "<<std::endl;
        std::cout<<"3-Ajouter un rhinoceros avec ses informations "<<std::endl;
        std::cout<<"4- Afficher compte-rendu du parc "<<std::endl;
        std::cout<<"5- Quitter "<<std::endl;   
    
    }
 