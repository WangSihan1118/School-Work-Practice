#include "animal.cpp"
#include "hunter.cpp"
#include "vegie.cpp"
#include "zoo.cpp"

int main()
{
    zoo a = zoo("aaaa",10,10);
    a.get_animals();
    a.get_name();
    a.get_number_of_animals();
    return 0; 
}