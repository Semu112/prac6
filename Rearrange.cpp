#include "Rearrange.h"

Individual Rearrange::mutate(Individual individual, int k){

    k = k-1; //Changes it from normal people index to c++ index starting at 0

    Individual* newInd = new Individual(individual.getString());

    k = k%(newInd->getLength());

    std::string subStr1 = newInd->getString().substr(0, k);
    std::string subStr2 = newInd->getString().substr(k, individual.getLength());

    newInd->setString(subStr2 + subStr1);

    return *newInd;
}