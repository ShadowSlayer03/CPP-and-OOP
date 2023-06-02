// Auto can be used as a keyword that automatically figures out what existing datatype the result should be
#include<iostream>
using namespace std;

double fun(double x,double y)
{
  return x/y;
}
int main()
{
  auto x='a'+9.76+5;
  cout<<x<<endl;

  auto res = fun(4.56,2.67);
  cout<<res<<endl;
  return 0;
}
