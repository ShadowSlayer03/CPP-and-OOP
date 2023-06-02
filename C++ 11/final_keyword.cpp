/*
Final keyword is used:
For a class to restrict inheritance 
It can be given to base class functions to make sure they're not overridden by derived class function of same name  
*/
#include<iostream>
using namespace std;
class Base //final
{
public:
  virtual void fun() final
{
  cout<<"HI"<<endl;
}
};
class Derived: public Base  //If base class was final, then Derived class cannot be declared
{
public:
  void fun()    //This function cannot override the Base fun()
{
  cout<<"Bro"<<endl;
}
};
int main()
{
  Derived d;
  return 0;
}
