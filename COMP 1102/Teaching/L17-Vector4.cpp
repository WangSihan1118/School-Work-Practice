// First vector example
#include <iostream>
#include <vector>
using namespace std;


int main(void)
{
  
  vector<double> myNums;       // empty vector of doubles
  
  // can initialise like arrays
  myNums = {10.0,23.5,11,12};   // works with c++11 
  // add more elements
  myNums.push_back(13.5);
  myNums.push_back(14.32);
  myNums.push_back(15);

  // print contents.
  std::cout << "my vector contains:";
  for (int i=0;i<myNums.size();i++){
    std::cout << " " << myNums[i]; 
  }	
  cout << endl;

  return 0;
}


