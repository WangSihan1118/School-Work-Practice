#ifndef USER_H
#define USER_H
#include "Cart.h"

class User
{
public:   
    User();
    User(Cart myCart);

    Cart cart;
    static int id;
    int myid;

    void setCart(Cart myCart);
    Cart getCart();
    void displayId();
    void displayOrder();

    ~User();
};

#endif