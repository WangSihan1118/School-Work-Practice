#ifndef PERSON_H
#define PERSON_H

#include <string>

//define class
class person{
public:
   	person();
   	person(std::string myName,int Salary);

   	std::string name;
   	int salary;
    
   	void setName(std::string myName);      // change the person's name
   	std::string getName();
   	void setSalary(int mySalary);     // change the person's salary
   	int getSalary();
   	~person();
};
#endif