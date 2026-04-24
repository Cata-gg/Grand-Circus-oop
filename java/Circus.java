import java.util.ArrayList;
import java.util.List;

public class Circus {
    public List<IAnimal> animals = new ArrayList<>();

    public void perform(Arena arena) {
        for (IAnimal animal : animals) {
            System.out.println(arena.announceAnimal(animal.getName(), animal.getSpeciesName()));
            System.out.println(arena.displayAnimalPerformance(animal.makeSound()));
        }
    }
}
