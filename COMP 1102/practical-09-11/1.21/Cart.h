#ifndef CART_H
#define CART_H

#include "Maindishlist.h"
#include "Drinklist.h"
#include "Snacklist.h"

class Cart
{
public:
    Cart();
    Cart(Maindishlist Mainlist, Drinklist Drinklist, Snacklist Snacklist);

    Maindishlist Mlist;
    Snacklist Slist;
    Drinklist Dlist;

    Maindishlist getMaindishes();
    Snacklist getSnacks();
    Drinklist getDrinks();

    void setMaindishes(Maindishlist Mainlist);
    void setSnacks(Snacklist Snacklist);
    void setDrinks(Drinklist Drinklist);

    void clearMaindish();
    void clearSnacks();
    void clearDrinks();
    void clearCart();

    void displayOrder();

    double getTotalPrice();
    double getTotalCost();
    double getTotalProfit();
    ~Cart();
};

#endif