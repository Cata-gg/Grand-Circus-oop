#include <iostream>
#include <string>
#include <vector>
using namespace std;
class IAnimal
{
public:
	virtual string getName() = 0;
	virtual string getSpeciesName() = 0;
	virtual ~IAnimal() {};
	virtual string MakeSound() = 0;
};
class AnimalBase : public IAnimal
{
public:
	string SpeciesName;
	string Name;

	AnimalBase(string SpeciesName, string Name) : SpeciesName(SpeciesName), Name(Name) {};

	string getName() override
	{
		return Name;
	}
	string getSpeciesName() override
	{
		return SpeciesName;
	}
	string MakeSound() override
	{
		return "Sound made by Animal: ";
	}

};
class Elephant : public AnimalBase
{
public:
	Elephant(string name, string SpeciesName) : AnimalBase(name, SpeciesName) {};
	string MakeSound() override
	{
		return AnimalBase::MakeSound() + "Barr";
	}
};

class Snake : public AnimalBase
{
public:
	Snake(string name, string SpeciesName) : AnimalBase(name, SpeciesName) {};
	string MakeSound() override
	{
		return AnimalBase::MakeSound() + "Sssss";
	}
};
class Lion : public AnimalBase
{
public:
	Lion(string name, string SpeciesName) : AnimalBase(name, SpeciesName) {};
	string MakeSound() override
	{
		return AnimalBase::MakeSound() + "Roar";
	}
};
class Kangaroo : public AnimalBase
{
public:
	Kangaroo(string name, string SpeciesName) : AnimalBase(name, SpeciesName) {};
	string MakeSound() override
	{
		return AnimalBase::MakeSound() + "Grrrr";
	}
};
class Arena
{
public:
	string PresentCircus(string circusName)
	{
		return "This is the " + circusName + "\n" + string(79, '=');
	}
	string AnnounceAnimal(string animalName, string animalSpecies)
	{
		return "Next will perform. It is a :" + animalName + "-" + animalSpecies;
	}
	string DisplayAnimalPerformance(string performance)
	{
		return "-> " + performance;
	}
};

class Circus
{
public:
	vector<shared_ptr<IAnimal>> animals;
	Circus()
	{}

	void Perform(Arena arena, Circus circus)
	{
		for (auto animal : circus.animals)
		{
			cout << arena.AnnounceAnimal(animal->getName(), animal->getSpeciesName()) << "\n";
			cout << arena.DisplayAnimalPerformance(animal->MakeSound()) << "\n";
		}
	}
};
void pause()
{
	char n;
	cout << " " << endl;
	cout << "Press any key to continue...";
	cin.get();

}
int main()
{
	Arena arena;
	Circus circus;
	circus.animals.push_back(make_shared<Elephant>("Gigi", "African"));
	circus.animals.push_back(make_shared<Snake>("King", "Cobra"));
	circus.animals.push_back(make_shared<Lion>("Kai", "Savana Lion"));
	circus.animals.push_back(make_shared<Kangaroo>("Dj", "Savana"));
	cout << arena.PresentCircus("BestOfCricus") << "\n";
	circus.Perform(arena, circus);
	pause();

	return 0;
}