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
    CHECK:
    cout<<"Please input s if you are staff,input c if you are customer, input q to quit."<<endl;
    cin>>user_status;
    if(user_status == 's'||user_status == 'c'||user_status == 'q'){
        return user_status;
    }else{
        cout<<"Please check your input."<<endl;
        goto CHECK;
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

char editWhichMenu(){
    char menu_status;
    cout<<"Which menu you want to edit?"<<endl;
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

char chooseAction(){
    char action_status;
    while(true){
        cout<<"View the financial report please input f."<<endl;
        cout<<"edit menu please input e"<<endl;
        cout<<"quit input q"<<endl;
        cin>>action_status;
        if(action_status == 'f'||action_status == 'e'||action_status == 'q'){
            return action_status;
        }else{
            cout<<"View the financial report please input f."<<endl;
            cout<<"edit menu please input a"<<endl;
            cout<<"quit input q"<<endl;
            cin>>action_status;
        }
    }
}

char AddorDelete(){
    char addordelete;
    while(true){
        cout<<"Add a new dish input a"<<endl;
        cout<<"Delete please input d"<<endl;
        cout<<"quit input q"<<endl;
        cin>>addordelete;
        if(addordelete == 'a'||addordelete == 'd'||addordelete == 'q'){
            return addordelete;
        }else{
        cout<<"Add a new dish input a"<<endl;
        cout<<"Delete please input d"<<endl;
        cout<<"quit input q"<<endl;
        cin>>addordelete;
        }
    }
}

int del(){
    int serialNumber;

    cout<<"Please input the number you want to delete. Input 0 to exit."<<endl;
    cin>>serialNumber;
    return serialNumber;
}
