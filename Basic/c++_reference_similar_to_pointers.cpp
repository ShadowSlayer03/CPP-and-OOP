#include<iostream>
using namespace std;

int main()
{
  int x=10;
  int &z=x;
  cout<<x<<endl;
  cout<<z<<endl;
  x++;
  z++;
  cout<<z<<endl;
  cout<<&z<<" "<<&x<<endl;
  return 0;
}