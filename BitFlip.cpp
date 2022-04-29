#include "BitFlip.h"

Individual BitFlip::mutate(Individual individual, int k){

    k = k-1; //Changes k from normal people index to c++ index starting at 0

    Individual* newInd = new Individual(individual.getString());

    newInd->flipBit(k%newInd->getLength());

    return *newInd;
}