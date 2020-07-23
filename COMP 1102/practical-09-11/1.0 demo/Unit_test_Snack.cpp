#include "Food.cpp"
#include "Snack.cpp"
#include <iostream>
using namespace std;

int main()
{
    int numberOfTest = 0;
    int successTest = 0;
    Snack Nuggets = Snack("nuggets" , 8, 4);
    
    //Test1 setName() getName() function
    {
        Nuggets.setName("Nuggets");
        if(Nuggets.getName() == "Nuggets"){
            ++numberOfTest;
            ++successTest;
            cout<<"Test1 success"<<endl;
        }else{
            ++numberOfTest;
            cout<<"Test1 fail"<<endl;
        }
    }

    //Test2 setPrice() getPrice()
    {
        Nuggets.setPrice(10);
        if(Nuggets.getPrice() == 10){
            ++numberOfTest;
            ++successTest;
            cout<<"Test2 success"<<endl;
        }else{
            ++numberOfTest;
            cout<<"Test2 fail"<<endl;
        }
    }

    //Test3 setCost()getCost() function
    {
        Nuggets.setCost(6);
        if(Nuggets.getCost() == 6){
            ++numberOfTest;
            ++successTest;
            cout<<"Test3 success"<<endl;
        }else{
            ++numberOfTest;
            cout<<"Test3 fail"<<endl;
        }
    }
    
    //Test4 Virtual totalCost() function
    {
        if(Nuggets.totalCost() == 8){
            ++numberOfTest;
            ++successTest;
            cout<<"Test4 success"<<endl;
        }else{
            ++numberOfTest;
            cout<<"Test4 fail"<<endl;
        }
    }
    
    cout<<"Success/Total "<<successTest<<"/"<<numberOfTest<<endl;
    return 0;
}