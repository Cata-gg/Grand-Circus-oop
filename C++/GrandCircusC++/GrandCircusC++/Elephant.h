#pragma once
#include "AnimalBase.h"
#include <string>

class Elephant : public AnimalBase {
public:
    Elephant(string name, string SpeciesName);
    string MakeSound() override;
};