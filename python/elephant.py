from animal_base import AnimalBase

class Elephant(AnimalBase):
    def make_sound(self): return super().make_sound() + "Barr"
