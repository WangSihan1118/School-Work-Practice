#ifndef HUNTER_H
#define HUNTER_H

#include <string>
#include <vector>
#include <iostream>
#include "Animal.h"

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

#endif