#include "Hammer.hpp"
Hammer::Hammer(int w): Tool("bang!")
{
    weight = w;
}

string Hammer::get_sound()
{
    return Tool::get_sound() + "times" + to_string(weight); 
}
Hammer::~Hammer()
{

}