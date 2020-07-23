#include "Food.cpp"

#include "Cart.cpp"

#include "Drinklist.cpp"
#include "Drink.cpp"

#include "Maindishlist.cpp"
#include "Maindish.cpp"

#include "Snacklist.cpp"
#include "Snack.cpp"
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

    //Test1
    c.displayOrder();

    //Test2 totalCost
    {
        if(c.getTotalPrice() == 63){
            ++numberOfTest;
            ++successTest;
            cout<<"Test1 success"<<endl;
        }else{
            ++numberOfTest;
            cout<<"Test1 fail"<<endl;
        }
    }

    //Test2 totalCost
    {
        if(c.getTotalCost() == 45){
            ++numberOfTest;
            ++successTest;
            cout<<"Test1 success"<<endl;
        }else{
            ++numberOfTest;
            cout<<"Test1 fail"<<endl;
        }
    }

    //Test2 totalCost
    {
        if(c.getTotalProfit() == 18){
            ++numberOfTest;
            ++successTest;
            cout<<"Test1 success"<<endl;
        }else{
            ++numberOfTest;
            cout<<"Test1 fail"<<endl;
        }
    }

    cout<<"Success/Total "<<successTest<<"/"<<numberOfTest<<endl;
    return 0;
}