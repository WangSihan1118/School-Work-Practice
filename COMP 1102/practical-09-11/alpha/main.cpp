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