//Inheritance Imp Example
#include<iostream>
using namespace std;

class Rectangle
{
private:
  int length;
  int breadth;
public:
  //Rectangle(int length,int breadth);
  int getLength();
  int getBreadth();
  void setLength(int l);
  void setBreadth(int b);
  int area();
  int perimeter();
  ~Rectangle();
};
// Rectangle::Rectangle(int length,int breadth)
// {
//   this->length = length;
//   this->breadth = breadth;
// }
int Rectangle::getLength()
{
  return length;
}
int Rectangle::getBreadth()
{
  return breadth;
}
void Rectangle::setLength(int l)
{
  length = l;
}
void Rectangle::setBreadth(int b)
{
  breadth = b;
}
int Rectangle::area()
{
  return length*breadth;
}
int Rectangle::perimeter()
{
  return 2*(length+breadth);
}
Rectangle::~Rectangle()
{
  cout<<"Rectangle destroyed"<<endl;
}

class Cuboid: public Rectangle
{
private:
  int height;
public:
  Cuboid(int length,int breadth, int height)
{
  setLength(length);
  setBreadth(breadth);
  this->height = height;
}
int getHeight()
{
  return height;
}
void setHeight(int h)
{
  height = h;
}
int volume()
{
  return getLength()*getBreadth()*height;
}
};

int main()
{
  Cuboid c1(23,56,78);
  //Public fns of cuboid
  c1.setHeight(45);
  cout<<c1.getHeight()<<endl;
  cout<<c1.volume()<<endl;
  //Public fns of Rectangle
  cout<<"Length= "<<c1.getLength()<<endl;
  c1.setBreadth(57);
  cout<<"Breadth= "<<c1.getBreadth()<<endl;
  cout<<"Area= "<<c1.area()<<endl;
  cout<<"Perimeter= "<<c1.perimeter()<<endl;
  return 0;
}
