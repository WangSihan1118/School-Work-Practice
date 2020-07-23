#include <iostream>
#include <string>

using namespace std;

void print_as_binary(std::string decimal_number){

    int number = std::stoi(decimal_number,nullptr,10);
    
    int binary[16];
    int index = 0;
    while(number >= 2){
        binary[index] = number % 2;
        number /= 2;
    }

    for(int j = index - 1;j >= 0 ;j--){
        std::cout<<binary[j]<<std::endl;
    }
}

class Animal
{
public:
	Animal(string pname);
	virtual void make_sound();

	static int id;
	int myid ;
	string name;
};

Animal::Animal(string pname)
{
    name = pname;
}

void Animal::make_sound()
{
	cout << "Hi, I'm " << name << " and I make a generic animal sound" << endl;
}

class Panda : public Animal
{
public:
	Panda(string pname);
	virtual void  make_sound();
};

Panda::Panda(string pname) : Animal(pname)
{
    name = pname;

}

void Panda::make_sound()
{
	cout << "Hi, I'm " << name << " and I make a panda sound" << endl;
}		

int main()
{
	Animal* a = new Animal("Anne");
	Animal* p1 = new Panda("Wao");
	Animal* p2 = new Panda("Dao");
	Panda* p3 = new Panda("Hong");

	a->make_sound();
	p1->make_sound();
	p2->make_sound();
	p3->make_sound();

	delete a;
	delete p1;
	delete p2;
    delete p3;
    return 0;
}