#include "Kangaroo.h"

Kangaroo::Kangaroo(string name, string SpeciesName) : AnimalBase(name, SpeciesName) {}
string Kangaroo::MakeSound() { return AnimalBase::MakeSound() + "Grrrr"; }