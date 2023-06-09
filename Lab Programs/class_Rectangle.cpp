#include<iostream>
using namespace std;

class Rectangle{
private:
  int length;
  int breadth;
public:
  Rectangle();
  Rectangle(int l, int b=1);     //breadth should have a default argument
  Rectangle& setDimensions(const int&,const int&);
  int computeArea();
  int computePerimeter();
};

Rectangle::Rectangle()   // Default constructor
:length{0},breadth{0}
{};

Rectangle::Rectangle(int l,int b)    // Parameterised Constructor
:length{l},breadth{b}
{};

int Rectangle::computeArea()
{
  return length*breadth;
}

int Rectangle::computePerimeter()
{
  return 2*(length+breadth);
}

Rectangle& Rectangle::setDimensions(const int& l,const int& b)
{
  length =l;
  breadth=b;
  return *this;
}

int main()
{
  Rectangle rect1;
  Rectangle rect2(30,50);

  cout<<rect1.computeArea()<<endl;
  cout<<rect1.computePerimeter()<<endl;
  cout<<rect2.computeArea()<<endl;
  cout<<rect2.computePerimeter()<<endl;

  Rectangle rect3;
  rect3.setDimensions(10,20);
  cout<<rect3.computeArea()<<endl;

  Rectangle* rect4 = new Rectangle;
  cout<<rect4->computeArea()<<endl;
  cout<<rect4->computePerimeter()<<endl;
  Rectangle* rect5 = new Rectangle(70,80);
  cout<<rect5->computeArea()<<endl;
  cout<<rect5->computePerimeter()<<endl;
  
  rect4->setDimensions(15,25);
  cout<<rect4->computeArea()<<endl;
  cout<<rect4->computePerimeter()<<endl;

  delete rect4;
  delete rect5;
  return 0;
}
