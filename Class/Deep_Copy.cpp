// Deep Copy
#include<iostream>
using namespace std;

class Basic
{
public:
  int* data;
  const int size=5;
  Basic();
  Basic(const Basic& b);
  ~Basic();
};

Basic::Basic()
{
  data = new int[size] {7,7,7,7,7}; //Making a dynamic array and initialising all values to 7
  cout<<"No-args Constructor"<<endl;
}
Basic::Basic(const Basic& b)
{
  data = new int[size];
  
  for(int i=0;i<size;i++)
  data[i] = b.data[i];
  
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
  
  for(int i=0;i<5;i++)
  cout<<ba.data[i]<<" ";
  
  return 0;
}