// First set example
// constructing sets
#include <iostream>
#include <set>
#include <string>
using namespace std;


int main(void)
{
  
  set<string> myNames;       // empty set of names
  
  // add names
  myNames.insert("Brad");
  myNames.insert("Alice");
  myNames.insert("Celia");
  
  if(myNames.find("Brad") !=  myNames.end()){
  	cout << "found Brad" << endl;
  }else{
	cout << "where's Brad?" << endl;
  }
  return 0;
}


