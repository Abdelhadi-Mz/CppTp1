#include<iostream>
#include "Livre.h"
void Livre::definirLivre(std::string t,std::string a , int annee){
    titre=t;
    auteur=a;
    anneePublication=annee;
}
void Livre::afficher(){
    std::cout<<"Titre : "<<titre<<","<<"Auteur : "<<auteur<< ", Annee : "<<anneePublication<<std::endl;
}
int Livre::getAnneePublication(){
    return anneePublication;
}