#include "BitFlip.h"

Individual* BitFlip::mutate(Individual individual, int k){

    Individual* newInd = new Individual(individual.getString());

    int strLength = newInd->getLength(); //Gets the length of the string
    int bit = (newInd->getString()[(k-1)%strLength])-48;

    newInd->setBit(k-1, !bit); //Flips bit

    return newInd;
}