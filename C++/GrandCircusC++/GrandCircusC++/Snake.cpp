#include "Snake.h"

Snake::Snake(string name, string SpeciesName) : AnimalBase(name, SpeciesName) {}
string Snake::MakeSound() { return AnimalBase::MakeSound() + "Sssss"; }