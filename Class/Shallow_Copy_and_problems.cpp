// Shallow Copy and its problems
#include<iostream>
using namespace std;

class Basic
{
public:
  int* data;
  Basic();
  Basic(const Basic& b);
  ~Basic();
};

Basic::Basic()
{
  data = new int[5] {7,7,7,7,7}; //Making a dynamic array and initialising all values to 7
  cout<<"No-args Constructor"<<endl;
}
Basic::Basic(const Basic& b)
:data{b.data}
{
  cout<<"Copy Constructor"<<endl;
}
Basic::~Basic()
{
  delete []data;
  cout<<"Data destroyed"<<endl;
}
int main()
{
  Basic base;
  Basic ba(base);

  base.data[0] = 15;

// Prob 1: Even though 'base data' was changed it affects 'ba data' as well

  for(int i=0;i<5;i++)
  cout<<ba.data[i]<<" ";

// Prob 2: The program crashes because 'base destructor' tries to free the same memory location after 'ba destructor' has already freed it
  return 0;
}