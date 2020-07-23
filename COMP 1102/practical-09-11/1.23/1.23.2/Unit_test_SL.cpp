#include "Food.h"
#include "Snacklist.h"
#include "Snack.h"
using namespace std;

int main(){

    int numberOfTest = 0;
    int successTest = 0;

    Snacklist s = Snacklist();
    Snack nuggets = Snack("nuggets" , 8, 4);
    Snack chips = Snack("chips" , 7, 3);
    Snack wings =  Snack("wings" , 6, 2);
    s.addSnack(nuggets);
    s.addSnack(chips);
    s.addSnack(wings);

    //Test1 totalPrice
    {
        if(s.totalPrice() == 21){
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
        if(s.totalCost() == 15){
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
    s.displayOrder();
    return 0;
}