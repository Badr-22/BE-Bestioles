# include "Kamikaze.h"

void Kamikaze::agir(Bestiole *b, list<double> orientations) {
    // Implémentation du comportement Kamikaze
    // Suivre les groupes de Bestioles et les heurter
    // avec une certaine probabilité
    cout << "Kamikaze Boom !" << endl;

    b->couleur[ 0 ] = 255;
    b->couleur[ 1 ] = 57;
    b->couleur[ 2 ] = 42;
}