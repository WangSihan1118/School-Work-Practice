#include "Food.cpp"
#include "Drinklist.cpp"
#include "Drink.cpp"
using namespace std;

int main(){

    int numberOfTest = 0;
    int successTest = 0;

    Drinklist d = Drinklist();
    Drink Coke = Drink("Coke" , 8, 4);
    Drink Cola = Drink("Cola" , 7, 3);
    Drink tea =  Drink("tea" , 6, 2);
    d.addDrink(Coke);
    d.addDrink(Cola);
    d.addDrink(tea);

    //Test1 totalPrice
    {
        if(d.totalPrice() == 21){
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
        if(d.totalCost() == 12){
            ++numberOfTest;
            ++successTest;
            cout<<"Test2 success"<<endl;
        }else{
            ++numberOfTest;
            cout<<"Test2 fail"<<endl;
        }
    }

    
    cout<<"Success/Total "<<successTest<<"/"<<numberOfTest<<endl;
    //Test3 display() function
    d.displayOrder();
    return 0;
}