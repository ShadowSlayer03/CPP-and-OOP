// Structure in C can't have functions only data members
// But structures in C++ can also have functions
// The only difference betweeen a structure and a class in C++ is that structure members are public by default and class members are private by default
#include<iostream>
using namespace std;

typedef struct point
{
  int x;
  int y;

  int distance()
{
  if(x>y)
    return x-y;
  else
    return y-x;
}
}P;

int main()
{
  P po;
  po.x = 90;
  po.y = 78;
  cout<<po.distance();
  return 0;
}
