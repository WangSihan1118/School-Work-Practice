#include "Food.h"
#include "Maindish.h"
#include "Maindishlist.h"
#include "Snack.h"
#include "Snacklist.h"
#include "Drink.h"
#include "Drinklist.h"
#include "Cart.h"
#include "User.h"
#include "Usercollection.h"

#include "Menu.cpp"


int main()
{
    //Create default menu on stack
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

    //menu contains all the food we offed.
    Cart menu = Cart(MaindishesMenu, DrinksMenu, SnacksMenu);

    Usercollection uc = Usercollection();

    //Finshed

    Welcome();
    START:
    char user_status = chooseStatus();
    if(user_status == 'c'){
        //Once customer start order. new a Cart object to store their order
        //store the following objects on heap
        Cart *c = new Cart();
        Maindishlist *ml = new Maindishlist();
        Drinklist *dl = new Drinklist();
        Snacklist *sl = new Snacklist();

        ORDER:
        char menu_status = chooseMenu();
        //m for maindishes, d for drinks, s for snacks,q for quit.
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
                        ml->addMaindish(maindish);
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
                        sl->addSnack(snack);
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
                        dl->addDrink(drink);
                    }
                    break;
                }
                goto ORDER;
            }

            }
    }

    c->setMaindishes(*ml);
    c->setSnacks(*sl);
    c->setDrinks(*dl);

    //ml, sl, dl, do not need use. release memory. 
    delete ml;
    delete sl;
    delete dl;

    c->displayOrder();
    std::cout<<c->getTotalPrice()<<"$"<<std::endl;

    char pay_status;
    std::cout<<"Do you want to pay for these foods? Y/N"<<std::endl;
    std::cin>>pay_status;
    if(pay_status == 'Y'){
        //Create a user object to store order information(id + Cart). Then release cart.
        User *u = new User(*c);
        delete c;
        //add into user collection, add a user, then release user.
        uc.addUser(*u);
        delete u;
        goto START;
    }

    if(pay_status == 'N'){
        c->clearCart();
        delete c;
        std::cout<<"your cart has been cleaned"<<std::endl;
        goto START;
    }

    }
    else if(user_status == 's')
    {
        string pwd = "123";
        string ipwd;
        int count = 0;
        const int allowedCount = 3;
        PWD:
        cout<<"Please input your password"<<endl;
        cin>>ipwd;
        count++;
        if(pwd == ipwd){
            ACTION:
            char action_status = chooseAction();
            if (action_status == 'f')
            {
                uc.displayFinancial();
                goto START;
            }
            else if(action_status == 'e')
            {
                char menu_status = editWhichMenu();
                if(menu_status == 'm')
                {
                    menu.getMaindishes().displayMenu();
                    char addOrDelete = AddorDelete();
                    if(addOrDelete == 'a')
                    {   
                        string name;
                        cout<<"Please input name"<<endl;
                        cin>>name;
                        double cost;
                        cout<<"Please input your cost"<<endl;
                        cin>>cost;
                        double price;
                        cout<<"Please input the price you want to sell"<<endl;
                        cin>>price;
                        Maindish *m = new Maindish(name,price,cost);
                        MaindishesMenu.addMaindish(*m);
                        MaindishesMenu.displayMenu();
                        delete m;
                        menu.setMaindishes(MaindishesMenu);
                        goto ACTION;
                    }
                    else if(addOrDelete == 'd')
                    {
                        int serialNumber = del();
                        if(serialNumber == 0){
                            goto ACTION;
                        }else{
                            MaindishesMenu.removeSearialNumber(serialNumber);
                            MaindishesMenu.displayMenu();
                            menu.setMaindishes(MaindishesMenu);
                            goto ACTION;
                        }
                    }
                    else if(addOrDelete == 'q')
                    {
                        goto ACTION;
                    }
                }
                else if(menu_status == 's')
                {
                    menu.getSnacks().displayMenu();
                    char addOrDelete = AddorDelete();
                    if(addOrDelete == 'a')
                    {   
                        string name;
                        cout<<"Please input name"<<endl;
                        cin>>name;
                        double cost;
                        cout<<"Please input your cost"<<endl;
                        cin>>cost;
                        double price;
                        cout<<"Please input the price you want to sell"<<endl;
                        cin>>price;
                        Snack *s = new Snack(name,price,cost);
                        SnacksMenu.addSnack(*s);
                        SnacksMenu.displayMenu();
                        delete s;
                        menu.setSnacks(SnacksMenu);
                        goto ACTION;
                    }
                    else if(addOrDelete == 'd')
                    {
                        int serialNumber = del();
                        if(serialNumber == 0){
                            goto ACTION;
                        }else{
                            SnacksMenu.removeSearialNumber(serialNumber);
                            SnacksMenu.displayMenu();
                            menu.setSnacks(SnacksMenu);
                            goto ACTION;
                        }
                    }
                    else if(addOrDelete == 'q')
                    {
                        goto ACTION;
                    }
                }
                else if(menu_status == 'd')
                {
                    menu.getDrinks().displayMenu();
                    char addOrDelete = AddorDelete();
                    if(addOrDelete == 'a')
                    {   
                        string name;
                        cout<<"Please input name"<<endl;
                        cin>>name;
                        double cost;
                        cout<<"Please input your cost"<<endl;
                        cin>>cost;
                        double price;
                        cout<<"Please input the price you want to sell"<<endl;
                        cin>>price;
                        Drink *m = new Drink(name,price,cost);
                        DrinksMenu.addDrink(*m);
                        DrinksMenu.displayMenu();
                        delete m;
                        menu.setDrinks(DrinksMenu);
                        goto ACTION;
                    }
                    else if(addOrDelete == 'd')
                    {
                        int serialNumber = del();
                        if(serialNumber == 0){
                            goto ACTION;
                        }else{
                            DrinksMenu.removeSearialNumber(serialNumber);
                            DrinksMenu.displayMenu();
                            menu.setDrinks(DrinksMenu);
                            goto ACTION;
                        }
                    }
                    else if(addOrDelete == 'q')
                    {
                        goto ACTION;
                    }
                }
                else if(menu_status == 'q')
                {
                    goto START;
                }
            }
            else if(action_status == 'q')
            {
                goto START;
            }
        }else{
            if(count <= allowedCount){
                cout<<"Wrong"<<endl;
                goto PWD;
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