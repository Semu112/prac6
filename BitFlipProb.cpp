#include "BitFlipProb.h"

#include <iostream>

Individual* BitFlipProb::mutate(Individual individual, int k){

    Individual* newInd = new Individual(individual.getString());

    for(int i = 0; i<newInd->getLength(); i++){

        if((rand() % 100) < (this->p)*100){

            newInd->flipBit(i);

        }
    }

    return newInd;

}