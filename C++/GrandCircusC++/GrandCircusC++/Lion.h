#pragma once
#include "AnimalBase.h"
#include <string>

class Lion : public AnimalBase {
public:
    Lion(string name, string SpeciesName);
    string MakeSound() override;
};