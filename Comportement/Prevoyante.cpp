# include "Prevoyante.h"

void Prevoyante::agir(Bestiole *b) {
    // Implémentation du comportement Prevoyante
    // Suivre les groupes de Bestioles et les heurter
    // avec une certaine probabilité
    cout << "Je suis un Prevoyante et je suis en train d'éviter les autres Bestioles !" << endl;

    b->couleur[ 0 ] = 185;
    b->couleur[ 1 ] = 54;
    b->couleur[ 2 ] = 199;
}