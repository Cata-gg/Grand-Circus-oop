#include "Arena.h"

string Arena::PresentCircus(string circusName) {
    return "This is the " + circusName + "\n" + string(79, '=');
}

string Arena::AnnounceAnimal(string animalName, string animalSpecies) {
    return "Next will perform. It is a :" + animalName + "-" + animalSpecies;
}

string Arena::DisplayAnimalPerformance(string performance) {
    return "-> " + performance;
}