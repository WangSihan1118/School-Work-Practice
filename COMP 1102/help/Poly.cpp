#include <iostream>
#include <iomanip>
using namespace std;

class Shape{
public:
    //Abstract class
    virtual double getArea() = 0;//Virtual function
    
    Shape(double w, double h)
    {
        width = w;
        height = h;
    }
    
    void setWidth(double w)
    {
        width = w;
    }
    
    void setHeight(double h) 
    { 
        height = h; 
    }
    
public:
    double width;
    double height; 
};

class Rectangle: public Shape
{ 
public:
    Rectangle(double w,double h) : Shape(w, h)
    {
    
    }

    double getArea() 
    { 
        cout<<(width * height)<<endl;
        return (width * height);
    } 
};
 
class Triangle: public Shape 
{ 
public:
    Triangle(double w, double h) : Shape(w, h)
    {
    
    }
    
    double getArea() 
    {
        cout<<(width * height)/2<<endl; 
        return (width * height)/2; 
    } 
};

class Circle: public Shape
{
public:
    Circle(double r) :Shape(r, r)
    {
        radius = r;
    } 

    double getArea()
    {
        cout<<radius*radius*3.141592653<<endl;
        return (radius*radius*3.141592653);
    }
    
public:
    double radius;
};

int main()
{
    Rectangle r = Rectangle(3.5,2.5);
    Triangle t = Triangle(3.5,2.5);
    Circle c = Circle(3);

    cout<<setiosflags(ios::fixed)<<setprecision(2);//two decimal

    r.getArea();
    t.getArea();
    c.getArea();

    return 0;
}