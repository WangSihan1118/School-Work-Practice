#ifndef FOOD_H
#define FOOD_H

#include <string>

class Food
{
public:
    Food(std::string foodname, double foodprice, double foodcost);

public:
    std::string name;
    double price;
    double basiccost;
    
    void setPrice(double foodprice);
    double getPrice();

    void setName(std::string foodname);
    std::string getName();

    void setCost(double foodcost);
    double getCost();

protected:
    virtual double totalCost() = 0;

    ~Food(); 
};

#endif