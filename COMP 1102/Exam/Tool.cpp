#include "Tool.hpp"

Tool::Tool(string s)
{
    sound = s;
}

string Tool::get_sound()
{
    return sound;
}

Tool::~Tool()
{
    
}