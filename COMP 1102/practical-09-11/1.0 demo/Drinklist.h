#ifndef DRINKLIST_H
#define DRINKLIST_H

#include "Drink.h"
#include <vector>
#include <iostream>

class Drinklist
{
public:
    Drinklist();
    Drinklist(std::vector<Drink> Drinklist);

    std::vector<Drink> Dlist;

    void displayOrder();
    Drink order(int serialNumber);
    void displayMenu();
    void addDrink(Drink drink);
    void removeSearialNumber(int serialNumber);

    void cleanList();
    double totalPrice();
    double totalCost();

    ~Drinklist();
};

#endif