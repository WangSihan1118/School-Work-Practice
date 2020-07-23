#include <iostream>
#include <string>
/*#include "meerkat.h"*/

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
int main (){
    Meerkat *bbq,*steak,*ham,*bao;

    bbq = new Meerkat();
    bbq->setName("bbq");
    bbq->setAge(1);
    bbq->getName();
    bbq->getAge();

    steak = new Meerkat();
    steak->setName("steak");
    steak->setAge(2);
    steak->getName();
    steak->getAge();

    ham = new Meerkat();
    ham->setName("ham");
    ham->setAge(3);
    ham->getName();
    ham->getAge();

    bao = new Meerkat();
    bao->setName("bao");
    bao->setAge(4);
    bao->getName();
    bao->getAge();

    return 0;
}