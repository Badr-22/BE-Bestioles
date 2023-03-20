#ifndef _KAMIKAZE_H_
#define _KAMIKAZE_H_

#include "../Comportement.h"
#include "../Bestiole.h"

using namespace std;

class Kamikaze : public Comportement {
public:
    void agir(Bestiole *b , list<double> orientations) override;
};

#endif // COMPORTEMENT_KAMIKAZE_H