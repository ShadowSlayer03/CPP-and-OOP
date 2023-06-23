#include<iostream>
using namespace std;

void division(float a,float b)
{
  try
  {
    if(b==0)
      throw 1;
    else
      cout<<"The quotient of the 2 numbers is "<<a/b<<endl;
  }
  catch(int)
    {
      cout<<"Division by zero undefined"<<endl;
    }
}

void readNums()
{
  float a,b;
  cout<<"Enter the 2 floating point numbers:"<<endl;
  try{
    if(cin>>a>>b)
    {
      division(a,b);
    }
    else
      throw 5;
  }
  catch(int)
    { 
      cout<<"Invalid input: Not a float"<<endl;
    }
}

int main()
{
  readNums();
  return 0;
}



