#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include "Person.h"

class Player : public Person
{
private:
    int* timelist;
    int numOfGames;
    static int nextID;
public:
    virtual int get_salary();
    int searchGame(int x);
    Player(std::string n,int sl,int* list, int m);
    ~Player();
};
#endif