public class Lion extends AnimalBase {
    public Lion(String name, String speciesName) {
        super(name, speciesName);
    }

    @Override
    public String makeSound() { return super.makeSound() + "Roar"; }
}
