#include "Team.h"

Team::Team()
{
    Person** team = new Person*[5];
    /*int list[2] = {1,2};
    team[0] = new Coach("a",1);
    team[1] = new Player("A",2,list,2);
    team[2] = new Player("B",3,list,3);
    team[3] = new Player("C",4,list,4);
    team[4] = new Coach("b",5);*/
}

Person** Team::get_team()
{
    return team;
}

Team::~Team()
{
    delete team[0];
    delete team[1];
    delete team[2];
    delete team[3];
    delete team[4];
    delete[] team;
}