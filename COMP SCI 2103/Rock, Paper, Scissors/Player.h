#ifndef PLAYER_H
#define PLAYER_H
#include <string>
#include <iostream>
class Player
{
protected:
    int gesture;
public:
    Player();
    virtual void setGesture();
    int getGesture();
    ~Player();
};
#endif