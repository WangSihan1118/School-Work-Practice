#include "Food.cpp"
#include "Drink.cpp"
#include <iostream>
using namespace std;

int main()
{
    int numberOfTest = 0;
    int successTest = 0;
    Drink Juice = Drink("juice" , 8, 4);
    
    //Test1 setName() getName() function
    {
        Juice.setName("Juice");
        if(Juice.getName() == "Juice"){
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
        Juice.setPrice(10);
        if(Juice.getPrice() == 10){
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
        Juice.setCost(6);
        if(Juice.getCost() == 6){
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
        if(Juice.totalCost() == 7){
            ++numberOfTest;
            ++successTest;
            cout<<"Test3 success"<<endl;
        }else{
            ++numberOfTest;
            cout<<"Test3 fail"<<endl;
        }
    }
    
    cout<<"Success/Total "<<successTest<<"/"<<numberOfTest<<endl;
    return 0;
}