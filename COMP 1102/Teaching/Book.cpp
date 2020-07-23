#include <iostream>

using namespace std;

class Book {
public:
  void setName(string bookName);
  string myName;
  int numPages;
};

void Book::setName(string bookName) {
  myName=bookName;
  return;
}

int main() {
  Book myBook;
  return 0;

}
