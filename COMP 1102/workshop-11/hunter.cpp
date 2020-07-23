#include "hunter.h"
int hunter::nextID = 1000;
hunter::hunter()
{
    kills = 0;
    animalID = nextID;
    nextID++;
}
hunter::hunter(std::string n, int vol) : animal(n, vol)
{
    kills = 0;
    animalID = nextID;
    nextID++;
}

int hunter::get_Kills()
{
    return kills;
}

void hunter::set_Kills(int killnum)
{
    kills = killnum;
}

int hunter::get_ID()
{
    return animalID;
}

std::string hunter::get_name()
{
    std::string n = "Hunter:" + name;
    return n;
}

hunter::~hunter()
{
}