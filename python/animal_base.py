from ianimal import IAnimal

class AnimalBase(IAnimal):
    def __init__(self, species_name: str, name: str):
        self.species_name = species_name
        self.name = name
    def get_name(self):         return self.name
    def get_species_name(self): return self.species_name
    def make_sound(self):       return "Sound made by Animal: "
