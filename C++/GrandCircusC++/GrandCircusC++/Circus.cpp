#include "Circus.h"
#include <iostream>

Circus::Circus() {}

void Circus::Perform(Arena arena, Circus circus) {
    for (auto animal : circus.animals) {
        cout << arena.AnnounceAnimal(animal->getName(), animal->getSpeciesName()) << "\n";
        cout << arena.DisplayAnimalPerformance(animal->MakeSound()) << "\n";
    }
}