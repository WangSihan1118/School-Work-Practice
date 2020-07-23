#include "cart.h"
#include <iostream>

cart::cart()
{
    meerkat acart [4]= {meerkat(),meerkat(),meerkat(),meerkat()};
    amount = 0;
}

bool cart::addMeerkat(meerkat cat)
{   
    if(amount >= 4){
        std::cout<<"This Cart is already full"<<std::endl;
        return false;
    }else{
        acart[amount] = cat;
        amount++;
        return true;
    }
}

void cart::emptyCart()
{
    std::cout<<"This cart has been cleaned"<<std::endl;
    amount = 0;
}

void cart::printMeerkats()
{
    for(int i = 0; i < amount;i++){
        std::cout<<acart[i].name<<" "<<acart[i].age<<std::endl;
    }
}

cart::~cart()
{
}




