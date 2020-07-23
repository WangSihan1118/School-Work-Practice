#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

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

#endif