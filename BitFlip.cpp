#include "BitFlip.h"

Individual* BitFlip::mutate(Individual individual, int k){

    Individual* newInd = new Individual(individual.getString());

    int strLength = newInd->getString().length(); //Gets the length of the string
    int bit = (newInd->getString()[k%strLength])-48;

    newInd->setBit(k, !bit); //Flips bit

    return newInd;
}