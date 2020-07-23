#include<iostream>
#include<string>
/*#include "meerkat.h"
#include "cart.h"*/

class Meerkat
{
public:
    //constructor
    Meerkat();
    //attributes
    std::string name;
    int age;
    //methods
    void setName(std::string meerName);   // change the meerkat's name
    std::string getName();
    void setAge(int meerAge);        // change the meerkat's age
    int getAge();
    ~Meerkat();
};
//implementation of the default constructor
Meerkat::Meerkat()
{
    name = "?";
    age = 0;
}

//implementation of methods
void Meerkat::setName(std::string meerName)
{
    name = meerName;
}

std::string Meerkat::getName()
{
    return name;
}

void Meerkat::setAge(int meerAge)
{
    age = meerAge;
}

int Meerkat::getAge()
{
    return age;
}

// implementation of the default  destructor
Meerkat::~Meerkat()
{
}

class Cart{
public:
    Cart();

    Meerkat cart[4];
    int amount;

    bool addMeerkat(Meerkat cat);   
    void emptyCart();               
    void printMeerkats();
    ~Cart();
};

Cart::Cart()
{
    Meerkat cart [4]= {Meerkat(),Meerkat(),Meerkat(),Meerkat()};
    amount = 0;
}

bool Cart::addMeerkat(Meerkat cat)
{   
    if(amount >= 4){
        std::cout<<"This Cart is already full"<<std::endl;
        return false;
    }else{
        cart[amount] = cat;
        amount++;
        return true;
    }
}

void Cart::emptyCart()
{
    std::cout<<"This cart has been cleaned"<<std::endl;
    amount = 0;
}

void Cart::printMeerkats()
{
    for(int i = 0; i < amount;i++){
        std::cout<<cart[i].name<<" "<<cart[i].age<<std::endl;
    }
}

Cart::~Cart()
{
}

int main(){
    Meerkat bbq = Meerkat();
    bbq.setName("bbq");
    bbq.setAge(1);

    Meerkat a = Meerkat();
    a.setName("a");
    a.setAge(2);

    Meerkat b = Meerkat();
    b.setName("b");
    b.setAge(3);


    Meerkat c = Meerkat();
    c.setName("c");
    c.setAge(4);


    Meerkat d = Meerkat();
    d.setName("d");
    d.setAge(5);

    Cart cart1 = Cart();
    cart1.addMeerkat(bbq);
    cart1.addMeerkat(a);
    cart1.addMeerkat(b);
    cart1.addMeerkat(c);
    cart1.addMeerkat(d);
    cart1.printMeerkats();
    cart1.emptyCart();

    return 0;
}