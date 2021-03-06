#include "Food.cpp"
#include "Maindish.cpp"
#include "Maindishlist.cpp"
#include "Snack.cpp"
#include "Snacklist.cpp"
#include "Drink.cpp"
#include "Drinklist.cpp"
#include "Cart.cpp"
#include "User.cpp"
#include "Usercollection.cpp"

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
        cout<<"Please input s if you are staff,input c if you are customer, input other button to quit."<<endl;
        cin>>user_status;
        if(user_status == 's'||user_status == 'c'||user_status == 'q'){
            return user_status;
        }else{
            cout<<"Please input s if you are staff,input c if you are customer"<<endl;
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
            cout<<"d for drinks"<<endl;;
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

int main()
{
    Maindish noodle = Maindish("noodle" , 12.99, 4);
    Maindish rice = Maindish("rice" , 11.99, 3);
    Maindish sushi =  Maindish("sushi" , 10.99, 2); 
    std::vector<Maindish> Mlist =  std::vector<Maindish>{noodle, rice, sushi};
    Maindishlist MaindishesMenu = Maindishlist(Mlist);


    Snack nuggets = Snack("nuggets" , 8.99, 3);
    Snack chips = Snack("chips" , 7.99, 2);
    Snack wings =  Snack("wings" , 6.99, 1);
    std::vector<Snack> Slist =  std::vector<Snack>{nuggets, chips, wings};
    Snacklist SnacksMenu = Slist;


    Drink Coke = Drink("Coke" , 1.99, 0.5);
    Drink Cola = Drink("Cola" , 1.99, 0.5);
    Drink tea =  Drink("tea" , 4.99, 1);
    std::vector<Drink> Dlist =  std::vector<Drink>{Coke, Cola, tea};
    Drinklist DrinksMenu = Drinklist(Dlist);

    Cart menu = Cart(MaindishesMenu, DrinksMenu, SnacksMenu);

    Usercollection uc = Usercollection();

    Welcome();
    START:
    char user_status = chooseStatus();
    if(user_status == 'c'){
        Cart c = Cart();
        Maindishlist ml = Maindishlist();
        Drinklist dl = Drinklist();
        Snacklist sl = Snacklist();

        ORDER:
        char menu_status = chooseMenu();
        while(menu_status != 'q'){
            switch (menu_status)
            {
            case 'm':
                {
                int m_order_number;
                while (true){
                    menu.getMaindishes().displayMenu();
                    m_order_number = order();
                    if(m_order_number == 0){
                        break;
                    }else{
                        Maindish maindish = menu.getMaindishes().order(m_order_number);
                        ml.addMaindish(maindish);
                    }
                    break;
                }
                goto ORDER;
                }

            case 's':
                {
                int s_order_number;
                while (true){
                    menu.getSnacks().displayMenu();
                    s_order_number = order();
                    if(s_order_number == 0){
                        break;
                    }else{
                        Snack snack = menu.getSnacks().order(s_order_number);
                        sl.addSnack(snack);
                    }
                    break;
                }
                goto ORDER;
                }
            
            case 'd':
            {
                int d_order_number;
                while (true){
                    menu.getDrinks().displayMenu();
                    d_order_number = order();
                    if(d_order_number == 0){
                        break;
                    }else{
                        Drink drink = menu.getDrinks().order(d_order_number);
                        dl.addDrink(drink);
                    }
                    break;
                }
                goto ORDER;
            }

            }
    }

    c.setMaindishes(ml);
    c.setSnacks(sl);
    c.setDrinks(dl);

    c.displayOrder();
    std::cout<<c.getTotalPrice()<<"$"<<std::endl;

    char pay_status;
    std::cout<<"Do you want to pay for these foods? Y/N"<<std::endl;
    std::cin>>pay_status;
    if(pay_status == 'Y'){
        User u = User(c);
        uc.addUser(u);
        goto START;
    }

    if(pay_status == 'N'){
        c.clearCart();
        std::cout<<"your cart has been cleaned"<<std::endl;
        goto START;
    }

    }
    else if(user_status == 's')
    {
        string pwd = "123";
        string ipwd;
        int count;
        const int allowedCount = 3;
        PASS:
        cout<<"Please input your password"<<endl;
        cin>>ipwd;
        count++;
        if(pwd == ipwd){
            uc.displayFinancial();
        }else{
            if(count <= allowedCount){
                cout<<"Wrong"<<endl;
                goto PASS;
            }else{
                cout<<"Locked"<<endl;
                goto START;
            }
        }

    }

    else
    {
       return 0; 
    }
    
}