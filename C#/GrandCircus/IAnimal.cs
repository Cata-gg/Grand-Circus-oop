using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RemoteLearning.GrandCircus
{
    internal interface IAnimal 
    {
       public string Name { get; }
       public string SpeciesName { get; }
       public  string MakeSound();
    }
}
