// SWAP by reference
#include<iostream>
using namespace std;

void swap(int &x,int &y)
{
  int temp;
  temp = x;
  x =y;
  y = temp;
}
int main()
{
  int a=10,b=67;
  cout<<a<<"\t"<<b<<endl;
  swap(a,b);
  cout<<a<<"\t"<<b<<endl;
  return 0;
}