#include <iostream>

using namespace std ;

// Class Lecturer
class Lecturer
{
public:
	string name;
	string occupation;

	void teach()
	{
		cout<<"Hi! I'm "<<name<<"! Welcome to OOP!"<<endl;
	}
}; //<- a lot of people forget this!!

// main program declares two Lecturer objects and asks them to teach
int main()
{
	Lecturer markus, nick;

	markus.teach() ;
	nick.teach() ;
}
