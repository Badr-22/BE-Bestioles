# include "Gregaire.h"

void Gregaire::agir(Bestiole *b) {
    // Implémentation du comportement Gregaire
    // Suivre les groupes de Bestioles et les heurter
    // avec une certaine probabilité
    cout << "Je suis un Gregaire chimba !" << endl;

    b->couleur[ 0 ] = 107;
    b->couleur[ 1 ] = 199;
    b->couleur[ 2 ] = 176;

}