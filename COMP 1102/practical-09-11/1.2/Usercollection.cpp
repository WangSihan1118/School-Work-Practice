#include "Usercollection.h"
Usercollection::Usercollection()
{
    usercollection = std::vector<User>{};
}

Usercollection::Usercollection(std::vector<User> u)
{
    usercollection = u;
}

double Usercollection::getTotalCost()
{
    double totalprice = 0;
    for(int i = 0; i < usercollection.size(); ++i){
        totalprice += usercollection[i].getCart().getTotalCost();
    }
    return totalprice;

}
double Usercollection::getTotalPrice()
{
    double totalprice = 0;
    for(int i = 0; i < usercollection.size(); ++i){
        totalprice += usercollection[i].getCart().getTotalPrice();
    }
    return totalprice;
}
double Usercollection::getTotalProfit()
{
    double totalprice = 0;
    for(int i = 0; i < usercollection.size(); ++i){
        totalprice += usercollection[i].getCart().getTotalProfit();
    }
    return totalprice;
}

void Usercollection::addUser(User u){
    usercollection.push_back(u);
}

void Usercollection::displayFinancial(){
    std::cout<<"Today's total cost is "<<getTotalCost()<<" $"<<std::endl;
    std::cout<<"Today's total revenue is  "<<getTotalPrice()<<" $"<<std::endl;
    std::cout<<"Today's total Profit is  "<<getTotalProfit()<<" $"<<std::endl;
}

Usercollection::~Usercollection()
{

}