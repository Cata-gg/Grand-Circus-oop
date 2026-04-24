from animal_base import AnimalBase

class Lion(AnimalBase):
    def make_sound(self): return super().make_sound() + "Roar"
