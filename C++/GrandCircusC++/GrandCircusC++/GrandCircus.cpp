#include <iostream>
#include "Arena.h"
#include "Circus.h"
#include "Elephant.h"
#include "Snake.h"
#include "Lion.h"
#include "Kangaroo.h"
using namespace std;

void pause() {
    cout << " " << endl;
    cout << "Press any key to continue...";
    cin.get();
}

int main() {
    Arena arena;
    Circus circus;

    circus.animals.push_back(make_shared<Elephant>("Gigi", "African"));
    circus.animals.push_back(make_shared<Snake>("King", "Cobra"));
    circus.animals.push_back(make_shared<Lion>("Kai", "Savana Lion"));
    circus.animals.push_back(make_shared<Kangaroo>("Dj", "Savana"));

    cout << arena.PresentCircus("BestOfCircus") << "\n";
    circus.Perform(arena, circus);
    pause();
    return 0;
}