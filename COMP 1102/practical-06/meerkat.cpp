#include "meerkat.h"

//implementation of the default constructor
meerkat::meerkat()
{
    name = "?";
    age = 0;
}

//implementation of methods
void meerkat::setName(std::string meerName)
{
    name = meerName;
}

std::string meerkat::getName()
{
    return name;
}

void meerkat::setAge(int meerAge)
{
    age = meerAge;
}

int meerkat::getAge()
{
    return age;
}

// implementation of the default  destructor
meerkat::~meerkat()
{
}