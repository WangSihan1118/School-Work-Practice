#ifndef BOOK_H
#define BOOK_H

#include <string>

// Class definition for a Book
class Book
{
public:
    //Constructor
    Book();
    Book(std::string bname,int bamount);

    //Attributes
    std::string name;
    int amount;

    //methods
    void setName(std::string sname);
    void getName();

    void setAmount(int samount);
    void getAmount();

    //Destructor
    ~Book();
};
#endif //BOOK_H