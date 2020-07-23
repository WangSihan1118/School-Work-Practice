#include "Music_box.h"

//implementation of the default constructor
Music_box::Music_box()
{
    name = "null";
    mywidth = 0;
}

Music_box::Music_box(std::string songname, int width)
{
    name = songname;
    mywidth = width;
}
//implementation of methods
std::string Music_box::get_song()
{
    return name;
}

int Music_box::get_width()
{
    return mywidth;
}

// implementation of the default  destructor
Music_box::~Music_box()
{
}