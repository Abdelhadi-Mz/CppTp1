#ifndef COMPTEBANCAIRE_H
#define COMPTEBANCAIRE_H
#include<string>
class CompteBancaire{
private:
    std::string  titulaire ;
    double solde=0.0;
public:
    void definirTitulaire(std::string nom);
    void depot(double montant);
    void retrait(double montant);
    void afficher();
};

#endif