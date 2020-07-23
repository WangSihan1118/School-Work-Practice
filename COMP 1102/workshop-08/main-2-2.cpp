#include "Vegie.h"

int main()
{
    Vegie *pig;
    pig = new Vegie("Pig");
    pig->set_favourite_food("Grass");
    std::cout<<pig->getFavouriteFood()<<std::endl;
    return 0;
}