//If there is an object of given class in a new class or a global function, then to access the private/protected members of given class, we need to declare the new class/function as a friend of the given class.
#include<iostream>
using namespace std;

class Diff;
////////////////////////////////////
class My
{
private:
  int num;
protected:
  int x;
public:
My(int n,int a)
{
  num =n;
  x=a;
}
friend void fun();
friend Diff;
};
//////////////////////////////////////

void fun()    //Global function
{
  My m(99,78);
  cout<<m.num<<endl;
  cout<<m.x<<endl;
}
class Diff     // new class with object of given class My
{
public:
void fun1()
{
  My a(56,90);
  cout<<a.num<<endl;
  cout<<a.x<<endl;
}
};
int main()
{
  fun();
  return 0;
}
