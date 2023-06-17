#include<iostream>
using namespace std;

template<typename T, typename U>
U max(T a, U b)
{
  if(a>b)
    return a;
  else
    return b;
}

int main()
{
  int a=78;
  float b=90.6;
  cout<<max(a,b)<<endl;
  
  float c=78.7;
  double d=107.8;
  cout<<max(c,d)<<endl;
  return 0;
}
