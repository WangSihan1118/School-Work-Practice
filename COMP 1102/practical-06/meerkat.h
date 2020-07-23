#ifndef MEERKAT_H
#define MEERKAT_H

#include <string>

//class definition
class meerkat
{
public:
    //constructor
    meerkat();
    //attributes
    std::string name;
    int age;
    //methods
    void setName(std::string meerName);   // change the meerkat's name
    std::string getName();
    void setAge(int meerAge);        // change the meerkat's age
    int getAge();
    ~meerkat();
};
#endif