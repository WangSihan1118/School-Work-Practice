#include <iostream>

using namespace std ;

// an animal made up of 3 parts
// don't forget the ; after the closing }
struct animal
{
	string name ;
	int id ;
	string species ;
} ;

// forward declare some animal functions
animal make_animal(string,int,string) ;
void print_animal(animal) ;
void print_animal_ptr(animal*) ;

// main - ignores command line arguments and environment variables
int main()
{
	// two animals and a pointer to an animal
	animal panda ;
	animal meerkat ;
	animal *ptr = &panda ;

	// initialising the panda
	panda.name = "Bob" ;
	panda.id = 7 ;
	panda.species = "Panda" ;

	// initialising the meerkat
	meerkat = make_animal("Timon",42,"Meerkat") ;

	// print out panda in 3 ways
	print_animal(panda) ;
	print_animal(*ptr) ;
	print_animal_ptr(ptr) ;

	// print out meerkay in 2 ways, notice the side effect in the output
	print_animal_ptr(&meerkat) ;
	print_animal(meerkat) ;

	// add a meerkat to the panda and print the result
	panda = panda + meerkat ;
	print_animal(panda) ;

	return 0 ;
}

// returns a new animal
animal make_animal(string name,int id,string species)
{
	animal something ;

	something.name = name ;
	something.id = id ;
	something.species = species ;

	return something ;
}

// prints an animal and increments id
void print_animal(animal a)
{
	cout << "Animal: " << a.name << " with id " << a.id << " is a " << a.species << endl ;
	a.id++ ;
}

// prints an animal using a pointer and increments id
void print_animal_ptr(animal *a)
{
	cout << "Animal: " << a->name << " with id " << a->id << " is a " << a->species << endl ;
	a->id++ ;
}

