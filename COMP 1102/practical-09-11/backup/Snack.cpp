#include "Snack.h"


Snack::Snack(std::string foodname, double foodprice, double foodcost) : Food(foodname, foodprice,foodcost)
{

} 

double Snack::totalCost()
{
    double totalcost = labourcost + basiccost;
    return totalcost;
}

Snack::~Snack()
{
    
}