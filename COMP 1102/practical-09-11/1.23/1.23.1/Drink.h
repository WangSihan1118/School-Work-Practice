#ifndef DRINK_H
#define DRINK_H

#include "Food.h"

class Drink : public Food
{
public:
    Drink(std::string foodname, double foodprice, double foodcost);

    double labourcost = 1;

    virtual double totalCost();
    ~Drink();
};
#endif