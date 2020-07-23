#include "User.h"

int User::id = 0;

User::User()
{
    myid = ++id;
    cart = Cart();
}

User::User(Cart myCart)
{
    myid = ++id;
    cart = myCart;
}

void User::setCart(Cart myCart)
{
    cart = myCart;
}
Cart User::getCart()
{
    return cart;
}
void User::displayId()
{
    std::cout<<myid<<std::endl;
}

void User::displayOrder()
{
    cart.displayOrder();
}

User::~User()
{

}