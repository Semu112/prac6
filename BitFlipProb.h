#ifndef BITFLIPPROB_H
#define BITFLIPPROB_H

#include "Mutator.h"
#include <iostream>

class BitFlipProb : public Mutator {

    public:

        double p;

        virtual Individual* mutate(Individual individual, int k);

        BitFlipProb(double argP){

            if(argP < 0 || argP > 1){

                std::cout << "please put p between 0 and 1 inclusive" << std::endl;
                this->p = 0.0;
                std::cout << "p set to " << this->p << std::endl;

            }
            else{
                this->p = argP;
            }

        }

};

#endif