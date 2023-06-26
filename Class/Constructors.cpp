// Constructors
#include<iostream>
using namespace std;

class Rectangle
{
private:
  int length;
  int breadth;
public:
void setLength(int l)
{
  length = l>=0?l:0;
}
void setBreadth(int b)
{
  breadth = b>=0?b:0;
}
int getLength()
{
  return length;
}
int getBreadth()
{
  return breadth;
}
Rectangle()   //User-defined unparameterized Constructor
{
  length = 12;
  breadth = 10;
}
Rectangle(int l, int b)    //User-defined parameterized Constructor
{
  setLength(l);
  setBreadth(b);
}
Rectangle(Rectangle &r)   //User-defined copy Constructor
  {
    length = r.length;
    breadth = r.breadth;
  }
// If any of the constructors do not exist then default Constructor will set all values to 0 //
int area()
{
  return length*breadth;
}
int perimeter()
{
  return 2*(length+breadth);
}
};

int main()
{
  Rectangle r1(23,56),r2(45,56);
  cout<<r1.getLength()<<endl;
  cout<<r1.getBreadth()<<endl;
  cout<<r2.getLength()<<endl;
  cout<<r2.getBreadth()<<endl;
  Rectangle r3(r2);
  cout<<r3.getLength()<<endl;
  cout<<r3.getBreadth()<<endl;
  return 0;
}

