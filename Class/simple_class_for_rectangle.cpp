// Creating a class and its objects in stack and heap
#include<iostream>
using namespace std;

class Rectangle
{
  public:
  int length;
  int breadth;

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
  Rectangle r1;
  r1.length = 12;
  r1.breadth = 4;
  Rectangle* r2 = new Rectangle;
  r2->length = 16;
  r2->breadth = 20;

  cout<<r1.area()<<endl;
  cout<<r2->area()<<endl;

  cout<<r1.perimeter()<<endl;
  cout<<r2->perimeter()<<endl;
  return 0;
}
