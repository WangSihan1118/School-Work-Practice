// First set example
// constructing sets
#include <iostream>
#include <map>
#include <string>
using namespace std;


int main(void)
{
  
  map<string,int> ages;       // map of names to ages
  
  // add entries
  ages["Brad"]=73;
  ages["Nick"]=25;
  ages["Millie"]=30;
  
  cout << ages["Brad"] << endl;
  cout << ages["Alice"] << endl;
  
  return 0;
}


