#ifndef TEAM_H
#define TEAM_H
#include "Person.h"
#include "Coach.h"
#include "Player.h"

class Team
{
private:
    Person** team;
public:
    Team();
    ~Team();
    Person** get_team();
};
#endif