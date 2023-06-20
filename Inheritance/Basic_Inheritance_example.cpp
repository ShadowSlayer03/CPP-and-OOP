// Basic usage of Inheritance
#include<iostream>
using namespace std;

class Base
{
  public: 
  int x;
  void print()
  {
  cout<<x<<endl;
  }
};

class Derived: public Base   //This class inherits attributes and methods(data,functions) from class 'Base' 
{
  public:
  int y;
  void display()
{
  cout<<y<<endl;
}
};

int main()
{
  Derived d1;
  d1.x = 21; //No error comes because class Derived also has 'x' but inherited from Base 
  d1.y = 56;
  d1.print(); //This also works because class Derived has inherited 'print' function from class 'Base'
  d1.display();
  return 0;
}