#include<string>
#include<iostream>

using namespace std;

// class definition for asset
class Asset{
protected:
  int value; // value of asset in cents
public:
  Asset(int value); // constructor
  int get_value();  // get the value
};

Asset::Asset(int val){   // implementation of constructor
   value = val;
}

int Asset::get_value(){  // implementation of get_value
   return value;
}




// abstract class for office equipment
class OfficeEquipment:public Asset{
public:
   OfficeEquipment(int val); // constructor
   virtual void use_item() =0;  // not implemented here 
};

// constructor
OfficeEquipment::OfficeEquipment(int val):Asset(val){  
   return; // nothing more to do
}




class Pen:public OfficeEquipment{
public:
   Pen(int val); // constructor
   virtual void use_item();  // will define 
};

Pen::Pen(int val):OfficeEquipment(val){
	return; // nothing more to do
}

void Pen::use_item(){
	cout << "scribble, scribble" << endl;
}




class Laptop:public OfficeEquipment{
public:
   Laptop(int val); // constructor
   virtual void use_item();  // will define 
};

Laptop::Laptop(int val):OfficeEquipment(val){
	return; // nothing more to do
}

void Laptop::use_item(){
	cout << "tappity, tap, tap" << endl;
}

int main(){
	//collection of assets
	int len=4;
	Asset* my_things[len];
      
    // complete the code below

    // (1)fill the assets up with 2 pens and two laptops (different values for each)
    my_things[0] = new Pen(2);
    my_things[1] = new Pen(3);
    my_things[2] = new Laptop(4);
    my_things[3] = new Laptop(5);

    // (2)calculate the total value of all assets in my_things and print it out
    int sum = 0;
    for(int i = 0; i < len; ++i)
    {
        sum += my_things[i]->get_value();
    }
    cout<<sum<<endl;

    // (3) call use_item on each of the items in my_things
    ((Pen*)my_things[0])->use_item();
    ((Pen*)my_things[1])->use_item();
    ((Laptop*)my_things[2])->use_item();
    ((Laptop*)my_things[3])->use_item();

}