#include "animal.h"
animal::animal()
{
    name = " ";
    volume = 0;
}
animal::animal(std::string n, int vol)
{
    name = n;
    volume = vol;
}

void animal::set_name(std::string n)
{
    name = n;
}

int animal::get_ID()
{
    return animalID;
}

void animal::set_Volume(int vol)
{
    volume = vol;
}

int animal::get_Volume()
{
    return volume;
}

animal::~animal()
{
}