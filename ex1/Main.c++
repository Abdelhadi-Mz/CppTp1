#include "CompteBancaire.h"
int main(){
    CompteBancaire compte1;
    compte1.definirTitulaire("Abdelhadi El Mezouari");
    compte1.depot(96522.00);
    compte1.retrait(1000);
    compte1.afficher();
    return 0;
}