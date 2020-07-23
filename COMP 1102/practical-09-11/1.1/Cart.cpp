#include "Cart.h" 

Cart::Cart()
{
    Mlist = Maindishlist();
    Dlist = Drinklist();
    Slist = Snacklist();
}

Cart::Cart(Maindishlist Mainlist, Drinklist Drinklist, Snacklist Snacklist)
{
    Mlist = Mainlist;
    Dlist = Drinklist;
    Slist = Snacklist;
}

Maindishlist Cart::getMaindishes()
{
    return Mlist; 
}

Snacklist Cart::getSnacks()
{
    return Slist;
}

Drinklist Cart::getDrinks()
{
    return Dlist;
}

void Cart::setMaindishes(Maindishlist Mainlist){
    Mlist = Mainlist;
}
void Cart::setSnacks(Snacklist Snacklist)
{
    Slist = Snacklist;
}
void Cart::setDrinks(Drinklist Drinkslist)
{
    Dlist = Drinkslist;
}


void Cart::clearMaindish()
{
    Mlist.cleanList();
}

void Cart::clearSnacks()
{
    Dlist.cleanList();
}

void Cart::clearDrinks()
{
    Slist.cleanList();
}

void Cart::clearCart()
{
    clearMaindish();
    clearSnacks();
    clearDrinks();
}

void Cart::displayOrder()
{
    Mlist.displayOrder();
    Dlist.displayOrder();
    Slist.displayOrder();
}

double Cart::getTotalPrice()
{
    double totalprice = Mlist.totalPrice() + Dlist.totalPrice() + Slist.totalPrice();
    return totalprice;
}

double Cart::getTotalCost()
{
    double totalcost = Mlist.totalCost() + Dlist.totalCost() + Slist.totalCost();
    return totalcost;
}

double Cart::getTotalProfit()
{
    double totalprofit = getTotalPrice() - getTotalCost();
    return totalprofit;
}

Cart::~Cart()
{

}