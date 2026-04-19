using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RemoteLearning.GrandCircus
{
    internal class Snake : AnimalBase
    {
        public Snake(string name, string speciesName) : base(name, speciesName) { }
        public override string MakeSound()
        { 
            return "Ssssss";
        }
    }
}
