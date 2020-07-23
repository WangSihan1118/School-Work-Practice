#ifndef HAMMER_H
#define HAMMER_H
#include "Tool.hpp"

class Hammer : public Tool
{
private:
    int weight;
public:
    Hammer(int w);
    string get_sound();
    ~Hammer();
};

#endif