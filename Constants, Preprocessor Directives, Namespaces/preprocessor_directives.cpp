#include<iostream>
#define PI 3.14
#ifndef PI      // if not defined 
  #define PI 3
#endif
#define max(x,y) (x>y?x:y)
using namespace std;

int main()
{
  cout<<PI<<endl;
  cout<<max(586,67)<<endl;
  return 0;
}
