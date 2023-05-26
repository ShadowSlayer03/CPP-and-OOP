// L-values: 
// values that have names and are addressable; appears on left side of assignment
// modifiable if they are not constants

// R-values:
// Appears on the right side of assignment
// Anything that is not an l-value is an r-value
#include<iostream>
using namespace std;

int main()
{
  int x=100;   //l-value
  x=1000+20;
  cout<<x<<endl;
  string name="Frank";   //l-value
  cout<<name<<endl;
  int b;
  //100=b;  This is not possible because 100 is an r-value
  return 0;
}