#ifndef PERSON_H
#define PERSON_H
#include <string>
class Person
{
protected:
    std::string name;
    std::string occupation;
public:
    int salary;
    int serviceLength;
    int personID;    
public:
    Person();
    Person(std::string n, std::string o, int sl);

    std::string get_name();
    void set_name(std::string n);
    std::string get_occupation();
    void set_occupation(std::string o);
    virtual int get_salary() = 0;
    void set_salary(int n);
    int get_personID();
    ~Person();
};
#endif