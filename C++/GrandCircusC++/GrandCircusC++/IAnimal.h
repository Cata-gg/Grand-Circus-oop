#pragma once
#include <string>
using namespace std;

class IAnimal {
public:
    virtual string getName() = 0;
    virtual string getSpeciesName() = 0;
    virtual string MakeSound() = 0;
    virtual ~IAnimal() {};
};