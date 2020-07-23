#include "Person.h"

Person::Person()
{

}

Person::Person(std::string n, std::string o, int sl)
{
    name = n;
    occupation = o;
    serviceLength = sl;
}

std::string Person::get_name()
{
    return name;
}


void Person::set_name(std::string n)
{
    name = n;
}


std::string Person::get_occupation()
{
    return occupation;
}


void Person::set_occupation(std::string o)
{
    occupation = o;
}


int Person::get_personID()
{
    return personID;
}

void Person::set_salary(int s)
{
    if(s > 0){
        salary = s;
    }
}


Person::~Person()
{

}