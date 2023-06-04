// Destructor for a Class 
// Destructor is used for deallocating resources used in a class. For eg: freeing memory of a dynamically allocated variable,array etc 
// There can only be a single Destructor for a class whereas multiple constructors can be present. 
// Destructor has same name as the class along with the tilde symbol. No return type required.
#include<iostream>
using namespace std;

class Test
{
  int* p;
public:
Test()
{
  p = new int[10];
  cout<<"Object of Test class created"<<endl;
}
~Test()
{
  delete []p;
  cout<<"Object destroyed"<<endl;
}
};
int main()
{
  Test t;   //Constructor is called
  //Some data processing code
  return 0;   //Destructor is called
}
