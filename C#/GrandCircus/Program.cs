using System;
using RemoteLearning.GrandCircus.CircusModel;
using RemoteLearning.GrandCircus.Presentation;

namespace RemoteLearning.GrandCircus
{
    internal class Program
    {
        private static void Main()
        {
            Arena arena = new Arena(); 
            Circus circus = new Circus(arena);
            circus.animals.Add(new Elephant("Gigi","African Forest"));
            circus.animals.Add(new Snake("Kai", "Cobra"));
            circus.animals.Add(new Lion("King", "Savana Lion"));
            circus.animals.Add(new Kangaroo("Dj", "Savana Kangaroo"));

            arena.PresentCircus("BestOfCircus");
            circus.Perform(arena,circus);
            

            Pause();
        }

        private static void Pause()
        {
            Console.WriteLine();
            Console.Write("Press any key to continue...");
            Console.ReadKey(true);
            Console.WriteLine();
        }
    }
}