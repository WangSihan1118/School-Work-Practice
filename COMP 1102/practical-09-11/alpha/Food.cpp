#include "Food.h"

Food::Food(std::string foodname, double foodprice, double foodcost)
{
    name = foodname;
    price = foodprice;
    basiccost = foodcost;
}

void Food::setPrice(double foodprice)
{
    price = foodprice;
}

double Food::getPrice()
{
    return price;
}

void Food::setName(std::string foodname)
{
    name = foodname;
}

std::string Food::getName()
{
    return name;
}

void Food::setCost(double foodcost)
{
    basiccost = foodcost;
}

double Food::getCost()
{
    return basiccost;
}

Food::~Food()
{
    
}
