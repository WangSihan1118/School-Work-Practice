#include "Coach.h"

int Coach::nextID = 0;

Coach::Coach(std::string  n, int sl) : Person(n, "coach",sl)
{
    personID = nextID;
    nextID++;
}

int Coach::get_salary()
{
    if(serviceLength < 15){
        return salary;
    }else{
        salary *=3;
        return salary;
    }  
}

Coach::~Coach()
{
}