#include "AnimalBase.h"

AnimalBase::AnimalBase(string SpeciesName, string Name)
    : SpeciesName(SpeciesName), Name(Name) {
}

string AnimalBase::getName() { return Name; }
string AnimalBase::getSpeciesName() { return SpeciesName; }
string AnimalBase::MakeSound() { return "Sound made by Animal: "; }