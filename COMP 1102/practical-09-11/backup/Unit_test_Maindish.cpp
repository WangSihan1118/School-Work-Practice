#include "Food.cpp"
#include "Maindish.cpp"
#include <iostream>
using namespace std;

int main()
{
    int numberOfTest = 0;
    int successTest = 0;
    Maindish noodle = Maindish("noodle" , 8, 4);
    
    //Test1 setName() getName() function
    {
        noodle.setName("Noodle");
        if(noodle.getName() == "Noodle"){
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
        noodle.setPrice(10);
        if(noodle.getPrice() == 10){
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
        noodle.setCost(6);
        if(noodle.getCost() == 6){
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
        if(noodle.totalCost() == 9){
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