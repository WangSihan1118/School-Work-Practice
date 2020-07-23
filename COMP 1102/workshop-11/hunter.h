#ifndef HUNTER_H
#define HUNTER_H
#include "animal.h"

class hunter : public animal
{
private:
    int kills;
    static int nextID;
public:
    hunter();
    hunter(std::string n, int vol);
    ~hunter();
    int get_Kills();
    void set_Kills(int killnum);
    int get_ID();
    virtual std::string get_name();
};
#endif
