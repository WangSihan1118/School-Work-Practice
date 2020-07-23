#include "person.h"

person::person()
{
     name ="?";
     salary = 0;
}

person::person(std::string myName,int mySalary)
{
    name = myName;
    salary = mySalary;
}

void person::setName(std::string myName)
{
    name = myName;
}
std::string person::getName()
{
    return name;
}
void person::setSalary(int mySalary)
{
    salary = mySalary;
}
int person::getSalary()
{
    return salary;
}
person::~person()
{
}