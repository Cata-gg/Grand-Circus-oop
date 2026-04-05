using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Schema;

namespace RemoteLearning.GrandCircus
{
    internal class   AnimalBase : IAnimal
    {

      public string SpeciesName { get; set; }
      public string Name {  get; set; }

       public AnimalBase (string name, string speciesName)
        {
            Name = name;
            SpeciesName = speciesName;
        }
        public  virtual string MakeSound()
        {
            return "Sound made by the animal: ";
        }
    }
}
