#ifndef SNACK_H
#define SNACK_H

#include "Food.h"

class Snack : public Food
{
public:
    Snack(std::string foodname, double foodprice, double foodcost);

    double labourcost = 2;

    virtual double totalCost();
    ~Snack();
};
#endif