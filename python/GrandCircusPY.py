from abc import ABC, abstractmethod

class IAnimal(ABC):
    @abstractmethod
    def get_name(self) -> str: ...
    @abstractmethod
    def get_species_name(self) -> str: ...
    @abstractmethod
    def make_sound(self) -> str: ...

class AnimalBase(IAnimal):
    def __init__(self, species_name: str, name: str):
        self.species_name = species_name
        self.name = name
    def get_name(self):        return self.name
    def get_species_name(self): return self.species_name
    def make_sound(self):      return "Sound made by Animal: "

class Elephant(AnimalBase):
    def make_sound(self): return super().make_sound() + "Barr"

class Snake(AnimalBase):
    def make_sound(self): return super().make_sound() + "Sssss"

class Lion(AnimalBase):
    def make_sound(self): return super().make_sound() + "Roar"

class Kangaroo(AnimalBase):
    def make_sound(self): return super().make_sound() + "Grrrr"

class Arena:
    def present_circus(self, circus_name: str):
        return f"This is the {circus_name}\n{'=' * 79}"
    def announce_animal(self, name: str, species: str):
        return f"Next will perform. It is a: {name} - {species}"
    def display_performance(self, performance: str):
        return f"-> {performance}"

class Circus:
    def __init__(self):
        self.animals: list[IAnimal] = []

    def perform(self, arena: Arena):
        for animal in self.animals:
            print(arena.announce_animal(animal.get_name(), animal.get_species_name()))
            print(arena.display_performance(animal.make_sound()))

if __name__ == "__main__":
    arena  = Arena()
    circus = Circus()

    circus.animals.append(Elephant("African",    "Gigi"))
    circus.animals.append(Snake("Cobra",       "King"))
    circus.animals.append(Lion("Savana Lion",  "Kai"))
    circus.animals.append(Kangaroo("Savana",   "Dj"))

    print(arena.present_circus("BestOfCircus"))
    circus.perform(arena)