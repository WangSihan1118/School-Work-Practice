#ifndef LIBRARY_H
#define LIBRARY_H

#include <string>
#include "Book.h"

//Class definition for a library
class Library
{
    public:
    //Constructor
    Library();
    Library(Book *book_collection);

    //Attributes
    Book *collection;

    //Methods
    void borrowBook(std::string bname);
    void returnBook(std::string bname);

    //Destructor
    ~Library();
};
#endif //LIBRARY_H