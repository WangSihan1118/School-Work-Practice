#include "Maindish.h"

Maindish::Maindish(std::string foodname, double foodprice, double foodcost) : Food(foodname, foodprice,foodcost)
{

} 

double Maindish::totalCost()
{
    double totalcost = labourcost + basiccost;
    return totalcost;
}

Maindish::~Maindish()
{

}