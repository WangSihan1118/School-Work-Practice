#ifndef MEERKAT_H
#define MEERKAT_H

#include <string>

//class definition
class Market
{
public:
    //constructor
    Market();
    //attributes
    std::string name;
    int age;
    //methods
    void setName(std::string meerName);   // change the Market's name
    std::string getName();
    void setAge(int meerAge);        // change the Market's age
    int getAge();
    ~Market();
};
#endif