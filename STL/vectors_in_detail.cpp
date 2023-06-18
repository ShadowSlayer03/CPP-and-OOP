// Vectors in CPP
// Exactly same as arrays but dynamic because we can change the size as we wish
#include <iostream>
#include<vector>
using namespace std;
int main() 
{
// DECLARE VECTORS:
  vector<int> p;  //Empty
  vector<double> v {1.2,3.4,5.6,7.8,9.0}; // Normally initialisation can be done along with declaration
  vector<int>vc(7);   // when declaring with size, we cannot initialise values. Here all 7 elements are intialised to 0
  vector<int>vctr(4,1000); // Here a vector of 4 values is created and all of the values are initialised to 1000

  vc= {1,2,3,4,5,6,7};
  for(auto x:vc)
    cout<<x<<" ";

// ACCESS INDIVIDUAL VALUES:
  cout<<vc[0]<<endl;  //  or
  cout<<vc.at(0)<<endl;

// ADD NEW VALUES AT THE END OF VECTOR:
  int a=8;
  v.push_back(12.7);
  v.push_back(13.9);
  vc.push_back(a);

//ADD VALUES AT ANY POSITION IN THE VECTOR:
// We can do this by using insert or emplace methods. The diff b/w them is the way in which they work.
// Insert creates a copy of that element and places it in the desired location while emplaces just takes that element and places directly. 
// Both shift the remaining elements to the right before inserting at a desired location.
  v.insert(v.begin()+2,54);
  v.emplace(v.begin()+3,67);

//TAKE OUT VALUES FROM THE END OF VECTOR:
  v.pop_back();  

// ERASE A SINGLE VALUE FROM A DESIRED POSITION OR AN ENTIRE SET OF VALUES FROM THE VECTOR:
  v.erase(v.begin()+7);
  v.erase(v.begin()+1,v.begin()+3);

//FIRST AND LAST ELEMENT:
cout<<v.front()<<" "<<v.back()<<endl;  
  
// CHECK SIZE:
  cout<<"Size of v = "<<v.size()<<endl;
  cout<<"Size of vc = "<<vc.size()<<endl;
  cout<<"Size of vctr = "<<vctr.size()<<endl;

//CLEAR THE VECTOR FROM MEMORY
  v.clear();
  cout<<v.size()<<endl;  

  return 0;
}
