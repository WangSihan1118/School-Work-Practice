#include "Hunter.h"
Hunter::Hunter() : Animal()
{
    killnumber = 0;
}

Hunter::Hunter(std::string aSpecies) : Animal(aSpecies)
{
    killnumber = 0;
}

void Hunter::record_kill(std::string kill)
{
    killnumber++;
    killlist.push_back(kill);
}

int Hunter::numberOfKills()
{
    return killnumber;
}

std::vector<std::string> Hunter::get_kills()
{
    return killlist;
}

Hunter::~Hunter()
{

}