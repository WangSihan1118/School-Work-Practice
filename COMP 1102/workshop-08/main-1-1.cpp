#include <string>
#include <iostream>
#include "Animal.h"
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
    ~Animal();
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

Animal::~Animal(){

}*/

int main()
{
    Animal *ele, *che;
    ele = new Animal( "Elephant");
    ele->set_name("A");
    std::cout<<"My Specie is "<<ele->get_species()<<" My ID is "<<ele->get_ID()<<" My name is "<<ele->get_name()<<std::endl;
    
    che = new Animal("Cheetah");
    che->set_name("B");
    std::cout<<"My Specie is "<<che->get_species()<<" My ID is "<<che->get_ID()<<" My name is "<<che->get_name()<<std::endl;

    delete ele;
    delete che;
    return 0;
}