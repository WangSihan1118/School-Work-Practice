#ifndef USERCOLLECTION_H
#define USERCOLLECTION_H

#include "User.h"
#include <vector>

class Usercollection
{
public:
    Usercollection();
    Usercollection(std::vector<User> u);
    std::vector<User> usercollection;

private:
    double getTotalCost();
    double getTotalPrice();
    double getTotalProfit();

public:
    void addUser(User u);
    void displayFinancial();

    ~Usercollection();
};
#endif