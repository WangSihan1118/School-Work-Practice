#include "Market.h"

//implementation of the default constructor
Market::Market()
{
    name = "?";
    age = 0;
}

//implementation of methods
void Market::setName(std::string meerName)
{
    name = meerName;
}

std::string Market::getName()
{
    return name;
}

void Market::setAge(int meerAge)
{
    age = meerAge;
}

int Market::getAge()
{
    return age;
}

// implementation of the default  destructor
Market::~Market()
{
}