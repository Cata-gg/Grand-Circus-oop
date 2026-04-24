#pragma once
#include "AnimalBase.h"
#include <string>

class Kangaroo : public AnimalBase {
public:
    Kangaroo(string name, string SpeciesName);
    string MakeSound() override;
};