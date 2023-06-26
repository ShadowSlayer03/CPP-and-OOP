// 'this' operator and scope resolution
// When the parameter of a function(local variables) has the same name as data member of a class, then we use 'this->' for class members
// Scope resolution '::' is used when functions within scope of the class is written outside the class 
#include<iostream>
using namespace std;

class Rectangle
{
private:
  int length;
  int breadth;
public:
  Rectangle(int length,int breadth)  //Inline function
{
  this->length = length;
  this->breadth = breadth;
}
int area();
int perimeter();
};

int main()
{
  Rectangle r(12,5);
  cout<<r.area()<<endl;
  cout<<r.perimeter()<<endl;
  return 0;
}

int Rectangle::area()
{
  return length*breadth;
}
int Rectangle::perimeter()
{
  return 2*(length+breadth);
}