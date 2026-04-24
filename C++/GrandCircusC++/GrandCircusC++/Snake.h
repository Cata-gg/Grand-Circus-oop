#pragma once
#include "AnimalBase.h"
#include <string>

class Snake : public AnimalBase {
public:
    Snake(string name, string SpeciesName);
    string MakeSound() override;
};