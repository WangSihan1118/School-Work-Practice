#include <string>
#include <iostream>
#include<vector>

using namespace std;

// class definition of Vehicle
class Vehicle
{
public:
  Vehicle(); // default constructor
  Vehicle(string id, int dist);
  void travel(int amount);
  virtual void print_details();
  ~Vehicle();

protected:
  string id;
  int dist_travelled;
};

// default constructors implementation
Vehicle::Vehicle()
{
  id=""; // empty id string
  dist_travelled=0;
}

// constructor taking id and distance
Vehicle::Vehicle(string id, int dist)
{
  this->id=id;
  dist_travelled=dist;
}

void Vehicle::travel(int amount)
{
  dist_travelled+=amount;
}

void Vehicle::print_details()
{
  cout << "vehicle id: " << id << " dist travelled: " << dist_travelled << endl;
}

Vehicle::~Vehicle()
{
  cout << "destroyed the vehicle" << endl;
}
    

class Car : public Vehicle
{
public:
  Car(); // default constructor
  Car(string id, int dist,int num_seats);
  virtual void print_details();
  ~Car();
protected:
  int num_seats;
};

  //default constructor
Car::Car():Vehicle()
{
  num_seats=0;
}

Car::Car(string id, int dist, int num_seats):Vehicle(id,dist)
{
	this->num_seats=num_seats;
}

void Car::print_details()
{
	Vehicle::print_details();
	cout <<  " num seats: " << num_seats << endl;
}

Car::~Car()
{
  cout << "destroyed the car"<<endl;
}
    
class Motorcycle : public Vehicle
{
public:
  Motorcycle(); // default constructor
  Motorcycle(string id, int dist,bool sidecar);
  virtual void print_details();
  ~Motorcycle();
protected:
  bool sidecar;
};

  //default constructor
Motorcycle::Motorcycle():Vehicle()
{
  sidecar=false;
}

Motorcycle::Motorcycle(string id, int dist, bool sidecar):Vehicle(id,dist)
{
	this->sidecar=sidecar;
}

void Motorcycle::print_details()
{
	Vehicle::print_details();  
    cout << " sidecar?: " << sidecar << endl;
}

Motorcycle::~Motorcycle()
{
  cout << "destroyed the motorcycle" << endl;
}
    
  
int main()
{
  // declare some variables
  Vehicle myVehicle("123BRAD",30000);
  Car myCar("456BRAD",70000,4);
  Motorcycle myCycle("789SUSIE",15000,true);
  
  
  // declare vector of vehicles 
  vector<Vehicle> vehicles;
  // add them to vector
  vehicles.push_back(myVehicle);
  vehicles.push_back(myCar);
  vehicles.push_back(myCycle);
  
  // print them all.
  for(int i=0;i<vehicles.size();i++){
  	vehicles[i].print_details();
  }
}
