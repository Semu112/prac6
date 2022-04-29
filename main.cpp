#include "Individual.h"
#include "Mutator.h"
#include "BitFlip.h"
#include "BitFlipProb.h"
#include "Rearrange.h"

#include <iostream>
#include <string>

Individual* execute(Individual* indPtr, Mutator* mPtr, int k){

    return mPtr->mutate(*indPtr, k);

}

int main(void){

    std::string binaryString1;
    std::cin >> binaryString1;
    // binaryString1 = "000000";

    int k1;
    std::cin >> k1;
    // k1 = 2;

    std::string binaryString2;
    std::cin >> binaryString2;
    // binaryString2 = "0111";

    int k2;
    std::cin >> k2;
    // k2 = 2;

    Individual individual1(binaryString1);
    Individual individual2(binaryString2);

    BitFlip bf;
    Rearrange r;

    individual1 = *(execute(&individual1, &r, k1));
    individual1 = *(execute(&individual1, &bf, k1));
    
    individual2 = *(execute(&individual2, &r, k2));
    // individual2 = *(execute(&individual2, &bf, k2));

    std::cout << individual1.getString()  << " " << individual2.getString() << " " << individual2.getMaxOnes() << std::endl;

    return 0;
}