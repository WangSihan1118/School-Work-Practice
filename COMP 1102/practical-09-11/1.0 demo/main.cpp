/*#include "Food.h"
#include "Maindish.h"
#include "Maindishlist.h"
#include "Snack.h"
#include "Snacklist.h"
#include "Drink.h"
#include "Drinklist.h"
#include "Cart.h"
#include "User.h"
#include "Usercollection.h"*/

#include "Food.cpp"
#include "Maindish.cpp"
#include "Maindishlist.cpp"
#include "Snack.cpp"
#include "Snacklist.cpp"
#include "Drink.cpp"
#include "Drinklist.cpp"
#include "Cart.cpp"
#include "User.cpp"
#include "Usercollection.cpp"

#include "Menu.cpp"


int main()
{
    Maindish noodle = Maindish("noodle" , 12.99, 4);
    Maindish rice = Maindish("rice" , 11.99, 3);
    Maindish sushi =  Maindish("sushi" , 10.99, 2); 
    std::vector<Maindish> Mlist =  std::vector<Maindish>{noodle, rice, sushi};
    Maindishlist MaindishesMenu = Maindishlist(Mlist);


    Snack nuggets = Snack("nuggets" , 8.99, 3);
    Snack chips = Snack("chips" , 7.99, 2);
    Snack wings =  Snack("wings" , 6.99, 1);
    std::vector<Snack> Slist =  std::vector<Snack>{nuggets, chips, wings};
    Snacklist SnacksMenu = Slist;


    Drink Coke = Drink("Coke" , 1.99, 0.5);
    Drink Cola = Drink("Cola" , 1.99, 0.5);
    Drink tea =  Drink("tea" , 4.99, 1);
    std::vector<Drink> Dlist =  std::vector<Drink>{Coke, Cola, tea};
    Drinklist DrinksMenu = Drinklist(Dlist);

    

    return 0;
}