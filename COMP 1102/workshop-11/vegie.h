#ifndef VEGIE_H
#define VEGIE_H
#include "animal.h"

class vegie : public animal
{
private:
    std::string favourite_food;
    static int nextID;
public:
    vegie();
    vegie(std::string n, int vol);
    ~vegie();
    std::string get_favourite_food();
    void set_favourite_food(std::string favourite_food);
    int get_ID();
    virtual std::string get_name();
};
#endif
