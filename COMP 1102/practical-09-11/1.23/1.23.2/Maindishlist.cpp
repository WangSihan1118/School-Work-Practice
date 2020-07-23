#include "Maindishlist.h"

using namespace std;
Maindishlist::Maindishlist(){
    Mlist = std::vector<Maindish> {};
}

Maindishlist::Maindishlist(std::vector<Maindish> maindishlist)
{
    Mlist = maindishlist;
}


void Maindishlist::addMaindish(Maindish dish)
{
    Mlist.push_back(dish);
}


void Maindishlist::removeSearialNumber(int serialNumber)
{   
    int index = serialNumber - 1;
    if(index < Mlist.size() && index >= 0 ){
        Mlist.erase(Mlist.begin() + index);
    }else{
        std::cout<<"Please check your input number"<<std::endl;
    }
}

void Maindishlist::displayOrder()
{
    std::cout<<"Your have ordered the following maindishes : "<<std::endl;
    for(int i = 1; i < Mlist.size() + 1; ++i){
        std::cout<<i<<". "<<Mlist[i-1].getName()<<std::endl;
    }
    std::cout<<"The total price of maindishes is : "<<totalPrice()<<" $"<<std::endl;
    std::cout<<std::endl;
}

Maindish Maindishlist::order(int serialNumber)
{
    int index = serialNumber - 1;
    if(index >= 0 && index < Mlist.size()){  
        return Mlist[index];
    }
}

void Maindishlist::displayMenu()
{
    std::cout<<"We offer following drinks and soups : "<<std::endl;
    for(int i = 1; i < Mlist.size() + 1; ++i){
        std::cout<<i<<". "<<Mlist[i-1].getName()<<" "<<Mlist[i-1].getPrice()<<"$"<<std::endl;
    }
}

void Maindishlist::cleanList()
{
    Mlist.clear();
}

double Maindishlist::totalPrice()
{
    double totalprice = 0;
    for(int i = 0; i < Mlist.size(); ++i){
        totalprice += Mlist[i].getPrice();
    }
    return totalprice;
}
double Maindishlist::totalCost()
{
    double totalcost = 0;
    for(int i = 0; i < Mlist.size(); ++i){
        totalcost += Mlist[i].totalCost();
    }
    return totalcost;
}

Maindishlist::~Maindishlist()
{

}