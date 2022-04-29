#ifndef INDIVIDUAL_H
#define INDIVIDUAL_H

#include <string>

class Individual {

    public:

        std::string getString();
        int getBit(int pos);
        void flipBit(int pos);
        int getMaxOnes();
        int getLength();
        void setString(std::string newStr);
        void setBit(int index, int value);

        Individual(int length){
            for(int i = 0; i<length; i++){
                this->binaryString = this->binaryString + "0";
            }
        }

        Individual(std::string argBinaryString){
            this->binaryString = argBinaryString;
        }    

    private:
        std::string binaryString = "";    

};

#endif