#ifndef ANIMAL_H
#define ANIMAL_H
#include <string>
class animal
{
protected:
    std::string name;
    int animalID;
    int volume;
public:
    animal();
    animal(std::string n, int vol);
    ~animal();

    virtual std::string get_name() = 0;
    void set_name(std::string n);
    int get_ID();
    void set_Volume(int vol);
    int get_Volume();
};
#endif
