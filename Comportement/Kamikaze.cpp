# include "Kamikaze.h"

void Kamikaze::agir(Bestiole *b) {
    // Implémentation du comportement Kamikaze
    // Suivre les groupes de Bestioles et les heurter
    // avec une certaine probabilité
    cout << "Je suis un Kamikaze et je suis en train de foncer sur les autres Bestioles !" << endl;

    b->couleur[ 0 ] = 15;
    b->couleur[ 1 ] = 148;
    b->couleur[ 2 ] = 115;
}