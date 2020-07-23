#include <iostream>

using namespace std;

int ftest(int aNum) {
  int accum=0;
  for (int i=0; i <= aNum; i++) {
    accum += i;
  }
  return accum;
}

int main() {
  int t = 3;
  int *p;
  //   int p*;
  //  *p = 1;
  // int i = 3;
  // p = &i;
  int y = ftest(1);
  int z = ftest(4);
  int w = ftest(-2);
  //cout << *p << endl; // This is how we usually do output in C++
  cout << y << ":" << z << ":" << w << endl;
}
