#include "Drinklist.h"


Drinklist::Drinklist(){
    Dlist = std::vector<Drink> {};
}

Drinklist::Drinklist(std::vector<Drink> Drinklist)
{
    Dlist = Drinklist;
}


void Drinklist::displayOrder()
{
    std::cout<<"Your have ordered the following drinks and soups : "<<std::endl;
    for(int i = 1; i < Dlist.size() + 1; ++i){
        std::cout<<i<<". "<<Dlist[i-1].getName()<<std::endl;
    }
    std::cout<<"The total price of drinks and soup are : "<<totalPrice()<<" $"<<std::endl;
    std::cout<<std::endl;
}

Drink Drinklist::order(int serialNumber)
{
    int index = serialNumber - 1;
    if(index >= 0 && index < Dlist.size()){  
        return Dlist[index];
    }else{
        std::cout<<"Please check your input"<<std::endl;
    }
}

void Drinklist::displayMenu()
{
    std::cout<<"We have following drinks and soups : "<<std::endl;
    for(int i = 1; i < Dlist.size() + 1; ++i){
        std::cout<<i<<". "<<Dlist[i-1].getName()<<" "<<Dlist[i-1].getPrice()<<"$"<<std::endl;
    }
}

void Drinklist::removeSearialNumber(int serialNumber)
{   
    int index = serialNumber - 1;
    if(index < Dlist.size() && index >= 0 ){
        Dlist.erase(Dlist.begin() + index);
    }else{
        std::cout<<"Please check your input number"<<std::endl;
    }
}

void Drinklist::addDrink(Drink drink)
{
    Dlist.push_back(drink);
}

void Drinklist::cleanList()
{
    Dlist.clear();
}

double Drinklist::totalPrice()
{
    double totalprice = 0;
    for(int i = 0; i < Dlist.size(); ++i){
        totalprice += Dlist[i].getPrice();
    }
    return totalprice;
}
double Drinklist::totalCost()
{
    double totalcost = 0;
    for(int i = 0; i < Dlist.size(); ++i){
        totalcost += Dlist[i].totalCost();
    }
    return totalcost;
}

Drinklist::~Drinklist()
{

}