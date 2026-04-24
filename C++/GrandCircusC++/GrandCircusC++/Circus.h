#pragma once
#include "IAnimal.h"
#include "Arena.h"
#include <vector>
#include <memory>
using namespace std;

class Circus {
public:
    vector<shared_ptr<IAnimal>> animals;

    Circus();
    void Perform(Arena arena, Circus circus);
};