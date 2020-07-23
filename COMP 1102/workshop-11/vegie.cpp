#include "vegie.h"
int vegie::nextID = 100;
vegie::vegie()
{
    favourite_food = "grass";
    animalID = nextID;
    nextID++;
}
vegie::vegie(std::string n, int vol) : animal(n, vol)
{
    favourite_food = "grass";
    animalID = nextID;
    nextID++;
}

std::string vegie::get_favourite_food()
{
    return favourite_food;
}

void vegie::set_favourite_food(std::string fname)
{
    favourite_food = fname;
}

int vegie::get_ID()
{
    return animalID;
}

std::string vegie::get_name()
{
    std::string n = "safe:" + name;
    return n;
}

vegie::~vegie()
{
}