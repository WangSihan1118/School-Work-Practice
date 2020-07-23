#include "Drink.h"


Drink::Drink(std::string foodname, double foodprice, double foodcost) : Food(foodname, foodprice,foodcost)
{

} 

double Drink::totalCost()
{
    double totalcost = labourcost + basiccost;
    return totalcost;
}

Drink::~Drink()
{
    
}