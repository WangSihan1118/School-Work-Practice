#include "Animal.h"

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

}