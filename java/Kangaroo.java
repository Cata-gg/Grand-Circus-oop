public class Kangaroo extends AnimalBase {
    public Kangaroo(String name, String speciesName) {
        super(name, speciesName);
    }

    @Override
    public String makeSound() { return super.makeSound() + "Grrrr"; }
}
