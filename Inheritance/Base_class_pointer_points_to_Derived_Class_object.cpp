// Base class pointer to a derived class object
// Derived class pointer to base object is not possible
#include<iostream>
using namespace std;

class Base
{
public:
  int x;
  void show()
{
  cout<<"Base class "<<x<<endl;
}
};

class Derived:public Base
{
public:
  int y;
  void display()
{
  cout<<"Derived class "<<y<<endl;
}
};
int main()
{
  Base* p;  //Base class pointer
  p = new Derived;   //Points to derived class object
  p->x = 67;
  //p->y = 45;   It cannot access derived class members
  return 0;
}