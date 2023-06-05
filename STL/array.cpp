// C++ STL
// Arrays
#include<iostream>
#include<array>
using namespace std;

int main()
{
  array<int,4> arr={1,2,3,4};
  // Access elements and modify them
  cout<<arr.at(1)<<endl;
  arr[2] = 7;
  cout<<arr[2]<<endl;

  //Size of array
  cout<<arr.size()<<endl;

  //Access first and last elements
  cout<<"First element is " <<arr.front()<<" "<<"Second element is "<<arr.back()<<endl;

  //Check if array is empty
  cout<<arr.empty()<<endl;

  
  return 0;
}