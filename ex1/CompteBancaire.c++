#include <iostream>
#include "CompteBancaire.h"


void CompteBancaire::definirTitulaire(std::string nom){
    titulaire=nom;
}
void CompteBancaire::depot(double montant){
    solde += montant;
}
void CompteBancaire::retrait(double montant){
    if(solde>=montant)
        solde -= montant;
    else
        std::cout<<"solde insuffisant"<<std::endl;
}
void CompteBancaire::afficher(){
    std::cout<<"titulaire :"<<titulaire<<std::endl;
    std::cout<<"solde :"<<solde<<"$"<<std::endl;
}
