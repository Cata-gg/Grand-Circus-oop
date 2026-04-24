#include "Elephant.h"

Elephant::Elephant(string name, string SpeciesName) : AnimalBase(name, SpeciesName) {}
string Elephant::MakeSound() { return AnimalBase::MakeSound() + "Barr"; }