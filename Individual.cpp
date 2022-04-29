#include "Individual.h"

#include <string>

void Individual::setString(std::string newStr){
    this->binaryString = newStr;
}

std::string Individual::getString(){
    return this->binaryString;
}

int Individual::getBit(int pos){

    if(pos<0 || pos > this->getLength()){
        return -1;
    }

    return (this->binaryString[pos])-48;
}

void Individual::flipBit(int pos){

    pos = pos%this->getLength();

    int bitToChange = this->getBit(pos);
    int flippedBit = !bitToChange;
    char charBit = std::to_string(flippedBit)[0];

    this->binaryString[pos] = charBit;

}

int Individual::getMaxOnes(){

    int sum = 0;
    int maxSum = 0;
    for(int i = 0; i<this->getLength(); i++){
        if(this->binaryString[i]-48 == 1){
            sum++;
        }
        else{
            sum = 0;
        }

        if(sum>maxSum){
            maxSum = sum;
        }
    }

    return maxSum;
}

int Individual::getLength(){
    return this->binaryString.length();
}