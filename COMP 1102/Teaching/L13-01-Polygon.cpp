#include <string>
#include <iostream>

using namespace std;

// class definition of a Polygon abstract class
class Polygon
{
protected:
  int width,height;
public:
  void set_values(int a,int b);
  virtual int area () =0;  // not implemented here
  ~Polygon();
};


// implementation of set values
void Polygon::set_values(int a,int b)
{
  width = a ;
  height = b ;
}

Polygon::~Polygon()
{
        cout << "Destroyed the polygon" << endl ;
}


class Square: public Polygon
{
public:
  virtual int area();
};

int Square::area()
{
  return width*height;
}

int main()
{
  Square *square1 = new Square();
  square1->set_values(3,4);
  cout << "Area is: " << square1->area() << endl;
}
