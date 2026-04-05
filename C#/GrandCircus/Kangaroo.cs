using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace RemoteLearning.GrandCircus
{
    internal class Kangaroo : AnimalBase
    {
        public Kangaroo(string name,string speciesName) : base(name, speciesName){ }
        public override string MakeSound()
        {
            string sound = base.MakeSound();
            return sound + "Grrrr";
        }
    }
}
