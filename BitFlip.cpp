#include "BitFlip.h"

Individual* BitFlip::mutate(Individual individual, int k){

    Individual* newInd = new Individual(individual.getString());

    newInd->flipBit((k-1)%newInd->getLength());

    return newInd;
}