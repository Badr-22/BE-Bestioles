#ifndef GREGAIRE_H
#define GREGAIRE_H

#include "../Comportement.h"
#include "../Bestiole.h"

using namespace std;

class Gregaire : public Comportement {
public:
    void agir(Bestiole *b) override;
};

#endif // COMPORTEMENT_GREGAIRE_H_