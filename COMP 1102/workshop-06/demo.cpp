#include <string>
#include <iostream>

using namespace std;

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

int main()
{
    Library *aLibrary;
	Book *Book1, *Book2, *Book3,*Book4;
	Book1 = new Book("booka",1);
	Book2 = new Book("bookb",20);
    Book3 = new Book("bookc",0);
    Book4 = new Book("xxxx",11111);
    Book booklist[3] = {*Book1,*Book2,*Book3};
    aLibrary = new Library(booklist);
    aLibrary->borrowBook("bookc");
    aLibrary->returnBook("bookc");
    aLibrary->returnBook("xxxx");
    return 0;
}
