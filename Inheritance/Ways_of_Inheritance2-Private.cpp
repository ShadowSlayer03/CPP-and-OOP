//Ways of Inheritance - Private
//Public of parent = Private of child
//Protected of parent = Private of child
//Private of parent = Inaccessible by child
#include<iostream>
using namespace std;

class Parent
{
private:
  int x;
public:
  int y;
protected:
  int z;
};

class Child:private Parent
{
public:
  void set()
{
  //x=9;  Private so cannot be accessed
  y=10;
  z=11;
}
};

class grandChild:public Child
{
public:
  void change()
{
  //x=90; Private so cannot be accessed
  //y=100; Private with respect to class Child so cannot be accessed 
  //z=110; Private with respect to class Child so cannot be accessed 
}
};

int main()
{
  grandChild g1;
  g1.change();
  return 0;
}