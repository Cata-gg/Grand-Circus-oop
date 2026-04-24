from animal_base import AnimalBase

class Kangaroo(AnimalBase):
    def make_sound(self): return super().make_sound() + "Grrrr"
