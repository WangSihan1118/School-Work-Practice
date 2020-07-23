#include <iostream>
#include <string>
#include "Book.h"
#include "Library.h"

using namespace std;

// main program
int main()
{
    Library *aLibrary;
	Book *Book1, *Book2, *Book3,*Book4;
	Book1 = new Book("booka",1);
    //Book Book1 = Boook("booka,1")
	Book2 = new Book("bookb",20);
    Book3 = new Book("bookc",0);
    Book4 = new Book("xxxx",11111);
    Book booklist[3] = {*Book1,*Book2,*Book3};
    //Library booklist = Library ({Book1,Book1,Book1});
    aLibrary = new Library(booklist);
    aLibrary->borrowBook("bookc");
    aLibrary->returnBook("bookc");
    aLibrary->returnBook("xxxx");
    return 0;
}
