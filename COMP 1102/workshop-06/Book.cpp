#include <string>
#include <iostream>
#include "Book.h"

using namespace std;

// implementation of the default Panda constructor
Book::Book()
{
    name = "?";
    amount = 0;
}

// implementation of a Panda constructor taking a name and amount
Book::Book(string bname,int bamount)
{
    name = bname;
    amount = bamount;
}

//Method implementation
void Book::setName(string sname){
    name = sname;
}

void Book::getName(){
    cout<< name;
}

void Book::setAmount(int samount){
    amount = samount;
}

void Book::getAmount(){
    cout<<amount;
}

//implementation of destructor
Book::~Book()
{
}