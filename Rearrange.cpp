#include "Rearrange.h"

Individual* Rearrange::mutate(Individual individual, int k){

    Individual* newInd = new Individual(individual.getString());

    std::string subStr1 = newInd->getString().substr(0, k);
    std::string subStr2 = newInd->getString().substr(k, individual.getString().length());

    newInd->setString(subStr2 + subStr1);

    return newInd;
}