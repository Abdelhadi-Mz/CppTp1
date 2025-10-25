#ifndef LIVRE_H
#define LIVRE_h
#include<string>
class Livre{
    private:
        std::string titre,auteur;
        int anneePublication;
    public:
    void definirLivre(std::string t,std::string,int annee);
    void afficher();
    int getAnneePublication();
};
#endif