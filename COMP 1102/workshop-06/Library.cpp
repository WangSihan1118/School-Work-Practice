#include <string>
#include <iostream>
#include "Library.h"

using namespace std;

// implementation of the default Panda constructor
Library::Library()
{
    collection = new Book[0];
}

Library::Library(Book* book_collection)
{
    collection = book_collection;
}

void Library::borrowBook(string bname){
    /* variable (collection) is an array or can be seen as an pointer which point the [0]of array
    (collection + i) is a pointer which point the next i positon on the RAM
    *(collection + i) use *  to take the object which located on the address(collection + 1)
    */
    int search_times = 0;
    for(int i = 0; i < sizeof(collection); i++){
        //search name
        if((*(collection + i)).name == bname){
            //check the amount
            if((*(collection + i)).amount <= 0){
                cout<<"Sorry,all of these books have be borrowed"<<endl;
                break;
            }else{
                (*(collection + i)).amount--;
                cout<<"Borrow succeeded"<<endl;
                break;
            }
        }else{
            search_times++;
        }
    }
    
    if(search_times == sizeof(collection)){
        cout<<"Sorry, I cannot find this book"<<endl;
    }
}

void Library::returnBook(string bname){
    int search_times = 0;
    for(int i = 0; i < sizeof(collection); i++){
       //search name
        if((*(collection + i)).name == bname){          
            (*(collection + i)).amount++;
            cout<<"Return succeeded"<<endl;
            break;
        }else{
            search_times++;
        }

        
    }

    if(search_times == sizeof(collection)){
        cout<<"Sorry, I cannot find this book"<<endl;
    }
}

Library::~Library()
{
}