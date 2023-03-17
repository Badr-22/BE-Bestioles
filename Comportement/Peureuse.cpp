# include "Peureuse.h"

void Peureuse::agir(Bestiole *b) {
    // Implémentation du comportement Kamikaze
    // Suivre les groupes de Bestioles et les heurter
    // avec une certaine probabilité
    cout << "Je suis un Peureuse et je suis en train d'éviter les autres Bestioles !" << endl;

    b->couleur[ 0 ] = 125;
    b->couleur[ 1 ] = 250;
    b->couleur[ 2 ] = 148;
}