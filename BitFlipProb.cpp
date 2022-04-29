#include "BitFlipProb.h"

Individual* BitFlipProb::mutate(Individual individual, int k){

    Individual* newInd = new Individual(individual.getString());

    for(int i = 0; i<newInd->getString().length(); i++){
        bool flip = (rand() % 100) < this->p;

        if(flip){
            newInd->getString()[i] = !(newInd->getString()[i]-48);
        }
    }

}