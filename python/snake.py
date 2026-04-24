from animal_base import AnimalBase

class Snake(AnimalBase):
    def make_sound(self): return super().make_sound() + "Sssss"
