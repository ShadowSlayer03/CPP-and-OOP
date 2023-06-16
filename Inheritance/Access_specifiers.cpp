// Access Specifiers in C++
// private - accessed by only members of the same class; cannot be accessed by both objects and derived classes(child class)
// public - Opposite of private. Can be accessed by same class members, objects and derived classes
// protected - Can be accessed by same class members and derived class. But cannot be accessed by objects

#include<iostream>
using namespace std;

class Base
{
  private:
  int x;
  public:
  int y;
  protected:
  int z;

  void funBase()
{
  x=6;
  y=5;
  z=4;
}
};

class Derived:public Base
{
  public:
  void funDerived()
{
  //x=45; Private so cannot be accessed by class Derived
  y=78;  
  z=90;
}
};

int main()
{
  Derived d1;
  //d1.x = 67; Private so cannot be accessed by the object
  d1.y = 88;
  //d1.z = 99; Protected so cannot be accessed by the object
  return 0;
}