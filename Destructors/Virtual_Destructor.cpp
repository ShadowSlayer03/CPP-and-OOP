// When a Derived class object is created, the base constructor is called first followed by derived constructor then, derived destructor is called followed by base destructor
// When we create a Base class pointer to Derived class object, first Base class Constructor is called followed by Derived class constructor.
// But when we free the pointer, only Base destructor is executed. In order for Derived class destructor to get executed we need to declare the Base class destructor as "virtual"
#include<iostream>
using namespace std;

class Base
{
public:
Base()
{
  cout<<"Base Constructor"<<endl;
}
virtual ~Base()
{
  cout<<"Base Destructor"<<endl;
}
};

class Derived: public Base
{
public:
Derived()
{
  cout<<"Derived Constructor"<<endl;
}
~Derived()
{
  cout<<"Derived Destructor"<<endl;
}
};

int main()
{
  //Derived d;
   Base* p = new Derived;
   delete p;
  return 0;
}