#ifndef BITFLIP_H
#define BITFLIP_H

#include "Mutator.h"

class BitFlip : public Mutator {

    public:
        virtual Individual mutate(Individual individual, int k);

};

#endif