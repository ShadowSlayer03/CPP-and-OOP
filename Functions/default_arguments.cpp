// Default Arguments in C++
// These default parameters work in such a way that if an actual value is passed from main fn, then this parameter takes that value.
// But if no value is passed from main fn for this parameter, it takes the default value
#include<iostream>
using namespace std;

int sum(int a, int b, int c=0)
{
  return a+b+c;
}
int main()
{
  cout<<sum(2,6,8)<<endl;
  cout<<sum(2,6)<<endl;
  return 0;
}
