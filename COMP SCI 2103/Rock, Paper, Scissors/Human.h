#ifndef HUMAN_H
#define HUMAN_H
#include "Player.h"
class Human : public Player
{
public:
    Human();
    virtual void setGesture(int g);
    ~Human();
};
#endif