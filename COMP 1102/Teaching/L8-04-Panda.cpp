#include <string>
#include <iostream>

using namespace std;

// Class definition for a Panda
class Panda
{
public:
	Panda();
	Panda(string pname, string pfav_food);
	static int id;
	int myid ;
	string name;
	string species;
	string type;
	string fav_food;
	void treat(int fav_food_quantity);		
	~Panda();
};

// implementation of the static int
int Panda::id = 0 ;

// implementation of the default Panda constructor
Panda::Panda()
{
	myid = id++ ;
	name = "?";
	species = "panda";
	type = "herbivore";
	fav_food ="bambooooo";
	cout << "Created a Panda with ID: " << myid << endl;
}

// implementation of a Panda constructor taking a name and food type
Panda::Panda(string pname, string pfav_food)
{
	myid = id++ ;
	name = pname;
	species = "panda";
	fav_food = pfav_food;
	cout << "Created a Panda with ID: " << myid << endl;
}

// implementation of the Panda treat function
void Panda::treat(int fav_food_quantity)
{
	cout<<"Hi, I'm "<<name<<" and I'm a "<<species<<", munching "<<fav_food_quantity<<" tons of "<<fav_food<<", my favorite food!" << endl;
}		

// implementation of the default Panda destructor
Panda::~Panda()
{
        cout << "Destroyed a Panda with ID: " << myid << endl ;
}

// main program
int main()
{
	Panda *pandas[3] ;
	Panda **morePandas = new Panda*[3] ;

	for ( int i = 0 ; i < 3 ; i++ )
	{
		pandas[i] = new Panda();	 // initialised
		pandas[i]->treat(i) ;
		morePandas[i] = new Panda() ;	 // initialised
		morePandas[i]->treat(i) ;
	}
	for ( int i = 0 ; i < 3 ; i++ )
	{
		delete pandas[i] ;
		delete morePandas[i] ;
	}
	delete[] morePandas ;
}
