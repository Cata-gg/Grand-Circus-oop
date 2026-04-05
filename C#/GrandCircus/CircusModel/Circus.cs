using RemoteLearning.GrandCircus.Presentation;
using System;
using System.Collections.Generic;

namespace RemoteLearning.GrandCircus.CircusModel
{
    internal class Circus
    {
        public List<IAnimal> animals;

        public Circus(Arena arena)
        {
            animals = new List<IAnimal>();
        }

        public void Perform(Arena arena , Circus circus )
        {
            foreach (IAnimal animal in circus.animals)
            {
                arena.AnnounceAnimal(animal.Name, animal.SpeciesName);
                arena.DisplayAnimalPerformance(animal.MakeSound());
            }
        }
    }
}