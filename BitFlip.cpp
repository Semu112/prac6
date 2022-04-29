#include "BitFlip.h"

#include <iostream>

Individual* BitFlip::mutate(Individual individual, int k){

    Individual* newInd = new Individual(individual.getString());

    std::cout << "before flip: " << newInd->getBit(k-1) << std::endl;

    newInd->flipBit((k-1)%newInd->getLength());

    std::cout << "after flip: " << newInd->getBit(k-1) << std::endl;

    return newInd;
}