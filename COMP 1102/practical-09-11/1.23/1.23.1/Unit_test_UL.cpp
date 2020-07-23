#include "Food.h"

#include "Cart.h"

#include "Drinklist.h"
#include "Drink.h"

#include "Maindishlist.h"
#include "Maindish.h"

#include "Snacklist.h"
#include "Snack.h"

#include "User.h"
#include "Usercollection.h"

using namespace std;

int main(){

    int numberOfTest = 0;
    int successTest = 0;
    Cart c = Cart();
    Drinklist d = Cart().getDrinks();
    Drink Coke = Drink("Coke" , 8, 4);
    Drink Cola = Drink("Cola" , 7, 3);
    Drink tea =  Drink("tea" , 6, 2);
    d.addDrink(Coke);
    d.addDrink(Cola);
    d.addDrink(tea);
    c.setDrinks(d);

    Maindishlist m = Cart().getMaindishes();
    Maindish noodle = Maindish("noodle" , 8, 4);
    Maindish rice = Maindish("rice" , 7, 3);
    Maindish sushi =  Maindish("sushi" , 6, 2);
    m.addMaindish(noodle);
    m.addMaindish(rice);
    m.addMaindish(sushi);
    c.setMaindishes(m);

    Snacklist s = Cart().getSnacks();
    Snack nuggets = Snack("nuggets" , 8, 4);
    Snack chips = Snack("chips" , 7, 3);
    Snack wings =  Snack("wings" , 6, 2);
    s.addSnack(nuggets);
    s.addSnack(chips);
    s.addSnack(wings);
    c.setSnacks(s);

    User u1 = User(c);
    User u2 = User(c);
    Usercollection Ul = Usercollection();
    Ul.addUser(u1);
    Ul.addUser(u2);

    Ul.displayFinancial();
    return 0;
}