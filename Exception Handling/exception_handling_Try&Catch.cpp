// Try - block of statements that decide if an exception occurs or not
// Throw - keyword used to generate a custom error, used inside Try block
// Catch - block of statements that only execute if an exception is thrown
// Try and Catch always occurs in pairs
#include<iostream>
using namespace std;

int main()
{
  int a,b;
  cin>>a;
  cin>>b;
  try
    {
      if(b!=0)
        cout<<"The quotient is "<<a/b<<endl;
      else
        throw 2;
    }
    catch(...)
    {
      cout<<"EXCEPTION: Division by zero is undefined"<<endl;
    }
  return 0;
}