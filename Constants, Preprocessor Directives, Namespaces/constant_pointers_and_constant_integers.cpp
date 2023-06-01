// Constant integers cannot be incremented or made changes to.
// const int *p/ int const *p = pointer to a constant integer; it can be reassigned to point to another variable, and it can be read but dereferencing and modifying is not allowed
// int* const ptr = constant pointer to integer; it cannot be reassigned to point to a different variable, dereferencing and changing values is allowed
// const int* const ptr = constant pointer to a constant integer; it cannot be reassigned values as well as cannot be dereferenced and changed

#include<iostream>
using namespace std;

int main()
{
  //const int a =10;    constant variable
  //cout<<a<<endl;
  
  // int x=89,y=90;
  // const int *p = &x;   pointer to constant integer
  // (*p) = 90;
  // cout<<*p;

  // int x=10,y=80;
  // int const *p = &x;   pointer to constant integer
  // p = &y;
  // (*p)++;

  // int x=10,y=90;
  // int *const ptr = &x;    constant pointer to integer
  // ptr = &y;
  // (*ptr) = 100;

  // int x=10,y=90;
  // const int*const ptr = &y;    constant pointer to constant integer
  // ptr = &x; 
  // *ptr = 70;
  return 0;
}
