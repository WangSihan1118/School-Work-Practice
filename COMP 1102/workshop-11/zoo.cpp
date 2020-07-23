#include "zoo.h"
zoo::zoo(std::string n, int cows, int lions)
{
    name = n;
    number_of_animals = cows + lions;

    vegie *cow = new vegie[cows];
    for(int i = 0; i < cows; i++){
        cow[i].set_name("Daisy");
        cow[i].set_Volume(100);
    }

    hunter *lion = new hunter[lions];
    for(int i = 0; i < lions; i++)
    {
        lion[i].set_Volume(50);
        lion[i].set_name("Clarence");
    }

    animal* zoo_animals[] = {cow, lion};
    animals = zoo_animals;
}

std::string zoo::get_name()
{
    return name;
}

int zoo::get_number_of_animals()
{
    return number_of_animals;
}

animal** zoo::get_animals()
{
    return animals;
}
zoo::~zoo()
{

}