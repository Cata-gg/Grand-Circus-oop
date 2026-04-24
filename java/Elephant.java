public class Elephant extends AnimalBase {
    public Elephant(String name, String speciesName) {
        super(name, speciesName);
    }

    @Override
    public String makeSound() { return super.makeSound() + "Barr"; }
}
