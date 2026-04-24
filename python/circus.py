from ianimal import IAnimal
from arena import Arena

class Circus:
    def __init__(self):
        self.animals: list[IAnimal] = []

    def perform(self, arena: Arena):
        for animal in self.animals:
            print(arena.announce_animal(animal.get_name(), animal.get_species_name()))
            print(arena.display_performance(animal.make_sound()))
