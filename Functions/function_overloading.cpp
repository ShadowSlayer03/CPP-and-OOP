// Function overloading - same name given to three functions yet compiler can differentiate easily
#include<iostream>
using namespace std;

int add(int x, int y)
{
  return x+y;
}
int add(int x, int y, int z)
{
  return x+y+z;
}
float add(float x, float y)
{
  return x+y;
}
int main()
{
  int a=10,b=9,c=87,d,e;
  float f=9.8,g=6.7,h;
  d=add(a,b);
  e=add(a,b,c);
  h=add(f,g);
  cout<<d<<" "<<e<<endl;
  cout<<h<<endl;
  return 0;
}