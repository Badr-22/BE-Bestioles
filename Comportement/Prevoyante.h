#ifndef _PREVOYANTE_H_
#define _PREVOYANTE_H_

#include "../Comportement.h"
#include "../Bestiole.h"

using namespace std;

class Prevoyante : public Comportement {
public:
    void agir(Bestiole *b) override;
};

#endif // COMPORTEMENT_PREVOYANTE_H_