#ifndef MENU_H
#define MENU_H

#include "Maindishlist.h"
#include "Drinklist.h"
#include "Snacklist.h"

class Menu
{
public:
    Menu(Maindishlist Mainlist, Drinklist Drinklist, Snacklist Snacklist);

    Maindishlist MMenu;
    Drinklist DMenu;
    Snacklist SMenu;

    void setMMenu(Maindishlist Mainlist);
    void setDMenu(Drinklist Drinklist);
    void setSMenu(Snacklist Snacklist);
    Maindishlist getMMenu();
    Drinklist getDMenu();
    Snacklist getSMenu();

    void Welcome();
    char chooseStatus();
    int Order();
    
};

#endif