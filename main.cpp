#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

#include <iostream>
#include <string>

Individual* execute(Individual* indPtr, Mutator* mPtr, int k){

    Individual* newIndividual =  new Individual(indPtr->getString());
    *newIndividual = mPtr->mutate(*indPtr, k);

    return newIndividual;

}

int main(void){

    std::string binaryString1;
    std::cin >> binaryString1;

    int k1;
    std::cin >> k1;

    std::string binaryString2;
    std::cin >> binaryString2;

    int k2;
    std::cin >> k2;

    Individual individual1(binaryString1);
    Individual individual2(binaryString2);

    BitFlip bf;
    Rearrange r;

    individual1 = *(execute(&individual1, &bf, k1));
    
    individual2 = *(execute(&individual2, &r, k2));
    

    /*
    Individual individual1("01111");
    Individual individual2("110000");

    BitFlip bf;
    Rearrange r;
    BitFlipProb bfp(1);

    std::cout << "First individual: " << individual1.getString() << std::endl;

    individual1 = *execute(&individual1, &bf, 2);
    std::cout << "Bit flip index 2: " << individual1.getString() << std::endl;

    individual1 = *execute(&individual1, &bf, 5);
    std::cout << "Bit flip index 5: " << individual1.getString() << std::endl;

    individual1 = *execute(&individual1, &r, 5);
    std::cout << "Rearrange around index 5: " << individual1.getString() << std::endl;

    individual1 = *execute(&individual1, &bfp, 12);
    std::cout << "Randomly mutate with probability 1: " << individual1.getString() << std::endl;
    */

    

    std::cout << individual1.getString()  << " " << individual2.getString() << " " << individual2.getMaxOnes() << std::endl;

    return 0;
}