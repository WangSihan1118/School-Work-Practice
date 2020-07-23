#ifndef COACH_H
#define COACH_H
#include <string>
#include "Person.h"

class Coach :public Person
{
private:
    static int nextID;
public:
    Coach(std::string n, int sl);
    ~Coach();
    virtual int get_salary();
};

#endif