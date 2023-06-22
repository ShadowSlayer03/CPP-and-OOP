// creating a class in C++
#include<iostream>
using namespace std;

class Rectangle
{
private:
  int length;
  int breadth;

public:
void initialise(int l, int b)
{
  length = l;
  breadth = b;
}
void printLandB()
{
  cout<<"The length is "<<length<<endl;
  cout<<"The breadth is "<<breadth<<endl;
}
void changeLength(int l)
{
  length = l;
}

};
int main()
{
  Rectangle r;
  r.initialise(12,9);
  r.printLandB();
  r.changeLength(54);
  r.printLandB();
  return 0;
}
