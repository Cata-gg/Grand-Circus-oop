class AnimalBase {
  constructor(speciesName, name) {
    this.speciesName = speciesName;
    this.name = name;
  }
  getName()        { return this.name; }
  getSpeciesName() { return this.speciesName; }
  makeSound()      { return "Sound made by Animal: "; }
}

class Elephant extends AnimalBase {
  makeSound() { return super.makeSound() + "Barr"; }
}
class Snake extends AnimalBase {
  makeSound() { return super.makeSound() + "Sssss"; }
}
class Lion extends AnimalBase {
  makeSound() { return super.makeSound() + "Roar"; }
}
class Kangaroo extends AnimalBase {
  makeSound() { return super.makeSound() + "Grrrr"; }
}

class Arena {
  presentCircus(circusName) {
    return `This is the ${circusName}\n${"=".repeat(79)}`;
  }
  announceAnimal(name, species) {
    return `Next will perform. It is a: ${name} - ${species}`;
  }
  displayPerformance(performance) {
    return `-> ${performance}`;
  }
}

class Circus {
  constructor() {
    this.animals = [];
  }
  perform(arena) {
    for (const animal of this.animals) {
      console.log(arena.announceAnimal(animal.getName(), animal.getSpeciesName()));
      console.log(arena.displayPerformance(animal.makeSound()));
    }
  }
}

const arena  = new Arena();
const circus = new Circus();

circus.animals.push(new Elephant("African", "Gigi"));
circus.animals.push(new Snake("Cobra", "King"));
circus.animals.push(new Lion("Savana Lion", "Kai"));
circus.animals.push(new Kangaroo("Savana", "Dj"));

console.log(arena.presentCircus("BestOfCircus"));
circus.perform(arena);