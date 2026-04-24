public class Snake extends AnimalBase {
    public Snake(String name, String speciesName) {
        super(name, speciesName);
    }

    @Override
    public String makeSound() { return super.makeSound() + "Sssss"; }
}
