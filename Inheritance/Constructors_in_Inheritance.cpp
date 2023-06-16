//Execution of Constructors in Inheritance
//First the constructor of the parent class is executed and then the constructor of child class 
//If no parameter is passed to parent class, then it takes unparameterised constructor
#include<iostream>
using namespace std;

class Base
{
public:
  Base(int x)
{
  cout<<"Param constructor of parent class "<<x<<endl;
}
  Base()
{
  cout<<"Unparam constructor of parent class"<<endl;
}
};

class Derived:public Base
{
public:
  Derived(int y)
{
  cout<<"Param constructor of child class "<<y<<endl;
}
Derived()
{
  cout<<"Unparam constructor of child class"<<endl;
}
Derived(int x,int y):Base(x)
{
  cout<<"Param constructor of child class "<<y<<endl;
}
};
int main()
{
  Derived d1;
  cout<<endl;
  Derived d2(89);
  cout<<endl;
  Derived d3(23,67);
  return 0;
}