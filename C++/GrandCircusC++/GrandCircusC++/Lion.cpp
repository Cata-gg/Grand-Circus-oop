#include "Lion.h"

Lion::Lion(string name, string SpeciesName) : AnimalBase(name, SpeciesName) {}
string Lion::MakeSound() { return AnimalBase::MakeSound() + "Roar"; }