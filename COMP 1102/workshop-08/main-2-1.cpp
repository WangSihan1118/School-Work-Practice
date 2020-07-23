#include "Hunter.h"
/*
class Animal
{
public:
    Animal();//Default Constructor
    Animal(std::string aSpecies);

    static int id;
    int myid;
    std::string species;
    std::string name;

    void set_name(std::string aName);     // change the animal's name
    std::string get_species();      
    std::string get_name();
    int get_ID();                    // the animal's unique ID
};

int Animal::id = 0;

Animal::Animal()
{
    myid = id++;
    species = "?";
    name = "?";
}

Animal::Animal(std::string aSpecies)
{
    myid = id++;
    species = aSpecies;
    name = "?";
}

void Animal::set_name(std::string aName)
{
    name = aName;
}

std::string Animal::get_species()
{
    return species;
}     
std::string Animal::get_name()
{
    return name;
}
int Animal::get_ID()
{
    return id;
}


class Hunter :public Animal
{
public:
    Hunter();
    Hunter(std::string aSpecies);         // create a hunter of the given species
    
    std::vector<std::string> killlist;
    int killnumber;

    void record_kill(std::string kill);   // add a new kill to the end of the hunter's list of kills
    int numberOfKills();             // how many kills have been recorded
    std::vector<std::string> get_kills();      // return a vector of all kills by this hunter
    ~Hunter();
};

Hunter::Hunter() : Animal()
{
    killnumber = 0;
}

Hunter::Hunter(std::string aSpecies) : Animal(aSpecies)
{
    killnumber = 0;
}

void Hunter::record_kill(std::string kill)
{
    killnumber++;
    killlist.push_back(kill);
}

int Hunter::numberOfKills()
{
    return killnumber;
}

std::vector<std::string> Hunter::get_kills()
{
    return killlist;
}

Hunter::~Hunter()
{

}*/

int main()
{
    Hunter *tig;
    tig = new Hunter("Tiger");
    tig->record_kill("Pig");
    tig->record_kill("Pig");
    tig->record_kill("Cow");
    std::cout<<tig->numberOfKills()<<std::endl;
    delete tig;
    return 0;
}