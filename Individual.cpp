#include "Individual.h"

#include <string>

void Individual::setString(std::string newStr){
    this->binaryString = newStr;
}

std::string Individual::getString(){
    return this->binaryString;
}

int Individual::getBit(int pos){

    if(pos<0 || pos > this->getString().length()){
        return -1;
    }

    return (this->binaryString[pos])-48;
}

void Individual::setBit(int index, int value){

    this->binaryString[index] = std::to_string(value)[0];

}

void Individual::flipBit(int pos){
    this->binaryString[pos] = !(this->binaryString[pos]-48);
}

int Individual::getMaxOnes(){

    int sum = 0;
    for(int i = 0; i<this->getString().length(); i++){
        if(this->binaryString[i] == 1){
            sum++;
        }
        else{
            sum = 0;
        }
    }

    return sum;
}

int Individual::getLength(){
    return this->binaryString.length();
}