// A simple if-else statement could handle exceptions.
// But we use try-catch functions because sometimes exceptions occur in a different function and we need to pass control to the main fn
// Multiple catch functions are possible depending on the type of value thrown because we can throw int,float,double,char,string or even a class etc.
// Nested try functions are also allowed given that every 'try' has a corresponding 'catch'
#include<iostream>
using namespace std;

int division(int x, int y)
{    
  if(y==0)
    throw 2;
  else
  return x/y;
}
int main()
{
  int a,b;
  cin>>a;
  cin>>b;
  try
  {
    cout<<division(a,b)<<endl;
  }
    catch(...)   //This is an ALL CATCH which can handle int,float, or any other value
    {
      cout<<"EXCEPTION: Division by zero is undefined"<<endl;
    }
  return 0;
}