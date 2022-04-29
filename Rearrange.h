#ifndef REARRANGE_H
#define REARRANGE_H

#include "Mutator.h"

class Rearrange : public Mutator {

    public:
        virtual Individual* mutate(Individual individual, int k);

};

#endif