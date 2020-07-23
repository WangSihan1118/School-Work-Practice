#ifndef VEGIE_H
#define VEGIE_H

#include <string>
#include <iostream>
#include "Animal.h"

class Vegie :public Animal
{
public:
    Vegie();
    Vegie(std::string aSpecies);  // create a vegie of the given species, its favourite food is "Grass"
    std::string fav_vegie;
    void set_favourite_food(std::string aVegie); // change the vegie's favourite food
    std::string getFavouriteFood();
    ~Vegie();
};

#endif