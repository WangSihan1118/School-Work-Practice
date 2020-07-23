#ifndef MAINDISH_H
#define MAINDISH_H

#include "Food.h"

class Maindish : public Food
{
public:
    Maindish(std::string foodname, double foodprice, double foodcost);

    double labourcost = 3.0;

    virtual double totalCost();
    ~Maindish();
};
#endif