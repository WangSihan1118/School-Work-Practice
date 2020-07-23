#ifndef MUSIC_BOX_H
#define MUSIC_BOX_H

#include <string>

//class definition
class Music_box
{
public:
    //constructor
    Music_box();
    Music_box(std::string songname, int width);
    //attributes
    std::string name;
    int mywidth;

    std::string get_song();
    int get_width();
    ~Music_box();
};
#endif