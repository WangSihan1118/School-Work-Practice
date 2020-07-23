#include <string>
#include <iostream>
#include "Music_box.h"

int main(){
    Music_box *box1 = new Music_box("A",4);
    std::cout<<box1->get_song()<<std::endl;
    std::cout<<box1->get_width()<<std::endl;
    delete box1;
    return 0;
}