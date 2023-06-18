//Ways of Inheritance - Public
//Public of parent = Public of child
//Protected of parent = Protected of child
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

class Child:public Parent
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
  y=100;
  z=110;
}
};

int main()
{
  grandChild g1;
  g1.change();
  return 0;
}