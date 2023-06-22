//Class and Constructor
#include<iostream>
using namespace std;

class Rectangle
{
private:
  int length;
  int breadth;

public:
 Rectangle()                // constructor
{
  length = 0;
  breadth = 0;
}
Rectangle(int l, int b)    // constructor
{
  length = l;
  breadth = b;
}
int area()               // method
{
  return length*breadth;
}
int perimeter()         // method
{
  return 2*(length+breadth);
}
void setLength(int l)      // method
{
  length = l;
}
void setBreadth(int b)        // method
{
  breadth = b;
}
void getLength()      // method
{
  return length;
}
void getBreadth()        // method
{
  return breadth;
}
~Rectangle()
{
  cout<<"Destructor";         //used to deallocate dynamic memory 
}
};

int main()
{
  Rectangle r(10,5);
  cout<<"Area "<<r.area()<<endl;
  cout<<"Perimeter "<<r.perimeter()<<endl;
  return 0;
}