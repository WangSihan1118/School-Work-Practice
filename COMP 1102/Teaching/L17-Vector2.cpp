// First vector example
#include <iostream>
#include <vector>
using namespace std;


int main(void)
{
  
  vector<int> myInts;       // empty vector of ints
  
  // can initialise like arrays
  myInts = {10,23,11,12};   // works with c++11 
  // add more elements
  myInts.push_back(13);
  myInts.push_back(14);
  myInts.push_back(15);

  // print contents.
  std::cout << "my vector contains:";
  for (int i=0;i<myInts.size();i++){
    std::cout << " " << myInts[i]; 
  }	
  cout << endl;
  
  // query capacity
  cout << myInts.capacity() << endl;
  // assign to distant element (do not do this!)
  myInts[1000]=25;
  cout << myInts.back() << endl;
  cout << myInts[1000] << endl;
  
  // what is the capacity now?
  cout << myInts.capacity() << endl;
  
  
  return 0;
}


