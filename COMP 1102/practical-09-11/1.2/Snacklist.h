#ifndef SNACKLIST_H
#define SNACKLIST_H

#include "Snack.h"
#include <vector>
#include <iostream>

class Snacklist
{
public:
    Snacklist();
    Snacklist(std::vector<Snack> Snacklist);

    std::vector<Snack> Slist;

    void displayOrder();
    Snack order(int serialNumber);
    void displayMenu();
    void addSnack(Snack snack);
    void removeSearialNumber(int serialNumber);

    void cleanList();
    double totalPrice();
    double totalCost();

    ~Snacklist();
};

#endif