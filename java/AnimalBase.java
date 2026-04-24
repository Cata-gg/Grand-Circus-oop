public abstract class AnimalBase implements IAnimal {
    protected String speciesName;
    protected String name;

    public AnimalBase(String name, String speciesName) {
        this.name = name;
        this.speciesName = speciesName;
    }

    @Override
    public String getName() { return name; }

    @Override
    public String getSpeciesName() { return speciesName; }

    @Override
    public String makeSound() { return "Sound made by Animal: "; }
}
