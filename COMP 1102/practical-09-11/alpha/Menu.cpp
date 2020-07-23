#include <iostream>
#include <string>

using namespace std;


void Welcome()
{
    cout<<"Good day. Welcome to our resturant!"<<endl;
}

char chooseStatus()
{   
    char user_status;
    cout<<"Are you staff or customer?"<<endl;
    while(true){
        cout<<"Please input s if you are staff,input c if you are customer, input q to quit."<<endl;
        cin>>user_status;
        if(user_status == 's'||user_status == 'c'||user_status == 'q'){
            return user_status;
        }else{
            cout<<"Please input s if you are staff,input c if you are customer, input q to quit."<<endl;
            cin>>user_status;
        }
    }
}

char chooseMenu(){
    char menu_status;
    cout<<"What would you like?"<<endl;
    while(true){
        cout<<"m for maindish"<<endl;
        cout<<"s for snacks"<<endl;
        cout<<"d for drinks"<<endl;
        cout<<"q for quit"<<endl;
        cin>>menu_status;
        if(menu_status == 'm'||menu_status == 's'||menu_status == 'd'||menu_status == 'q'){
            return menu_status;
        }else{
            cout<<"m for maindish"<<endl;
            cout<<"s for snacks"<<endl;
            cout<<"d for drinks"<<endl;
            cout<<"q for quit"<<endl;
            cin>>menu_status;
        }
    }
}

int order(){
    int serialNumber;

    cout<<"Please input the number you want to order. Input 0 to exit."<<endl;
    cin>>serialNumber;
    return serialNumber;
}