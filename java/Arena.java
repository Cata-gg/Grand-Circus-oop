public class Arena {
    public String presentCircus(String circusName) {
        return "This is the " + circusName + "\n" + "=".repeat(79);
    }

    public String announceAnimal(String animalName, String animalSpecies) {
        return "Next will perform. It is a :" + animalName + "-" + animalSpecies;
    }

    public String displayAnimalPerformance(String performance) {
        return "-> " + performance;
    }
}
