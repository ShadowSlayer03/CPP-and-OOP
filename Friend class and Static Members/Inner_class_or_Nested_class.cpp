// Inner Class or Nested Class
// Used when a class has to be created which is useful only in the scope of another class. Eg class Node in class LinkedList
#include<iostream>
using namespace std;

class Outer
{
public:
void fun()
{
  i.display();   // The function of the Inner class object can be used in the Outer function
}
class Inner
{
  public:
  void display()
{
  cout<<"Hi Inner Class"<<endl;
}
};
Inner i;   //Object of Inner class can be created only after creating the Inner class
};

int main()
{
  Outer o;
  o.fun();
  return 0;
}