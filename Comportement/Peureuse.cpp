# include "Peureuse.h"

void Peureuse::agir(Bestiole *b, list<double> orientations) {
    // Implémentation du comportement Kamikaze
    // Suivre les groupes de Bestioles et les heurter
    // avec une certaine probabilité
    cout << "Peureuse aide !" << endl;

    b->couleur[ 0 ] = 15;
    b->couleur[ 1 ] = 255;
    b->couleur[ 2 ] = 114;
}