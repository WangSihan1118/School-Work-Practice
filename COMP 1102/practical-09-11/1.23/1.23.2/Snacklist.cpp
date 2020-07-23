#include "Snacklist.h"
using namespace std;

Snacklist::Snacklist(){
    Slist = std::vector<Snack> {};
}

Snacklist::Snacklist(std::vector<Snack> Snacklist)
{
    Slist = Snacklist;
}

void Snacklist::displayOrder()
{
    std::cout<<"Your have ordered the following snacks : "<<std::endl;
    for(int i = 1; i < Slist.size() + 1; ++i){
        std::cout<<i<<". "<<Slist[i-1].getName()<<std::endl;
    }
    std::cout<<"The total price of snack is : "<<totalPrice()<<" $"<<std::endl;
    std::cout<<std::endl;
}

Snack Snacklist::order(int serialNumber)
   {
    int index = serialNumber - 1;
    if(index >= 0 && index < Slist.size()){  
        return Slist[index];
    }
}


void Snacklist::displayMenu()
{
    std::cout<<"We offer following drinks and soups : "<<std::endl;
    for(int i = 1; i < Slist.size() + 1; ++i){
        std::cout<<i<<". "<<Slist[i-1].getName()<<" "<<Slist[i-1].getPrice()<<"$"<<std::endl;
    }
}

void Snacklist::addSnack(Snack snack)
{
    Slist.push_back(snack);
}

void Snacklist::removeSearialNumber(int serialNumber)
{   
    int index = serialNumber - 1;
    if(index < Slist.size() && index >= 0 ){
        Slist.erase(Slist.begin() + index);
    }else{
        std::cout<<"Please check your input number"<<std::endl;
    }
}

void Snacklist::cleanList()
{
    Slist.clear();
}

double Snacklist::totalPrice()
{
    double totalprice = 0;
    for(int i = 0; i < Slist.size(); ++i){
        totalprice += Slist[i].getPrice();
    }
    return totalprice;
}
double Snacklist::totalCost()
{
    double totalcost = 0;
    for(int i = 0; i < Slist.size(); ++i){
        totalcost += Slist[i].totalCost();
    }
    return totalcost;
}

Snacklist::~Snacklist()
{

}