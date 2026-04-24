#pragma once
#include "IAnimal.h"
#include <string>

class AnimalBase : public IAnimal {
public:
    string SpeciesName;
    string Name;

    AnimalBase(string SpeciesName, string Name);
    string getName() override;
    string getSpeciesName() override;
    string MakeSound() override;
};