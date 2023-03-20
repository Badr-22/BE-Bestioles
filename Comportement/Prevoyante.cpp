# include "Prevoyante.h"

void Prevoyante::agir(Bestiole *b, list<double> orientations) {
    // Implémentation du comportement Prevoyante
    // Suivre les groupes de Bestioles et les heurter
    // avec une certaine probabilité
    cout << "Prevoyante, evite moi !" << endl;

    b->couleur[ 0 ] = 36;
    b->couleur[ 1 ] = 28;
    b->couleur[ 2 ] = 255;
}