#include "Food.cpp"
#include "Maindishlist.cpp"
#include "Maindish.cpp"
using namespace std;

int main(){

    int numberOfTest = 0;
    int successTest = 0;

    Maindishlist m = Maindishlist();
    Maindish noodle = Maindish("noodle" , 8, 4);
    Maindish rice = Maindish("rice" , 7, 3);
    Maindish sushi =  Maindish("sushi" , 6, 2);
    m.addMaindish(noodle);
    m.addMaindish(rice);
    m.addMaindish(sushi);

    //Test1 totalPrice
    {
        if(m.totalPrice() == 21){
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
        if(m.totalCost() == 18){
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
    m.displayOrder();
    return 0;
}