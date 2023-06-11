//Manipulators
#include<iostream>
#include<iomanip>   // Should be used for setw() and other manipulator functions
using namespace std;

int main()
{
  cout<<"Hi"<<endl;  //endl is also a manipulator
  cout<<hex<<123<<endl;  // so is hex
  cout<<oct<<230<<endl;  // and oct
  cout<<dec<<34.5<<endl; // and dec
  cout<<setw(10)<<"Hello"<<endl;
  return 0; 
}
