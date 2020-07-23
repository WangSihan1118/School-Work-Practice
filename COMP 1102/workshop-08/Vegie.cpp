#include "Vegie.h"

Vegie::Vegie() : Animal()
{
    fav_vegie = "?";
}

Vegie::Vegie(std::string aSpecies) : Animal(aSpecies)
{
    fav_vegie = "Grass";
}

void Vegie::set_favourite_food(std::string aVegie)
{
    fav_vegie = aVegie;
}

std::string Vegie::getFavouriteFood()
{
    return fav_vegie;
}

Vegie::~Vegie()
{

}