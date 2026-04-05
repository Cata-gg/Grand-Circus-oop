using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RemoteLearning.GrandCircus
{
    internal interface IAnimal 
    {
        string Name { get; }
        string SpeciesName { get; }
        string MakeSound();
    }
}
