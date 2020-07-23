#ifndef MAINDISHLIST_H
#define MAINDISHLIST_H

#include "Maindish.h"
#include <vector>
#include <iostream>

class Maindishlist
{
public:
    Maindishlist();
    Maindishlist(std::vector<Maindish> maindishlist);

    std::vector<Maindish> Mlist;

    void displayOrder();
    Maindish order(int serialNumber);

    void displayMenu();
    void addMaindish(Maindish dish);
    void removeSearialNumber(int serialNumber);

    void cleanList();
    double totalPrice();
    double totalCost();

    ~Maindishlist();
};

#endif