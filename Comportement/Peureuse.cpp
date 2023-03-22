# include "Peureuse.h"

void Peureuse::agir(Bestiole *b, list<double> orientations) {

    cout << "Peureuse aide !" << endl;

    b->couleur[ 0 ] = 15;
    b->couleur[ 1 ] = 255;
    b->couleur[ 2 ] = 114;
}