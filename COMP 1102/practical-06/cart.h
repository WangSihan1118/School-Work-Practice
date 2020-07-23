#ifndef CART_H
#define CART_H

#include "meerkat.h"

class cart{
public:
    cart();

    meerkat acart[4];
    int amount;

    bool addMeerkat(meerkat cat);   
    void emptyCart();               
    void printMeerkats();
    ~cart();
};

#endif