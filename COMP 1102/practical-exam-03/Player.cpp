#include "Player.h"

int Player::nextID = 1000;
Player::Player(std::string n,int sl,int* list, int num):Person(n, "player",sl)
{
    timelist = list;
    numOfGames = num;
    personID = nextID;
    nextID++;
}

int Player::get_salary()
{
    if(serviceLength < 20){
        return salary;
    }else{
        salary *=3;
        return salary;
    }  
}

int Player::searchGame(int x)
{
    for(int i = 0; i < numOfGames; i++)
    {
        if(timelist[i] == x)
        {
            return i;
        }
    }
    return -1;
}

Player::~Player()
{

}