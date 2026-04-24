from arena import Arena
from circus import Circus
from elephant import Elephant
from snake import Snake
from lion import Lion
from kangaroo import Kangaroo

if __name__ == "__main__":
    arena  = Arena()
    circus = Circus()

    circus.animals.append(Elephant("African",       "Gigi"))
    circus.animals.append(Snake("Cobra",            "King"))
    circus.animals.append(Lion("Savana Lion",       "Kai"))
    circus.animals.append(Kangaroo("Savana",        "Dj"))

    print(arena.present_circus("BestOfCircus"))
    circus.perform(arena)
