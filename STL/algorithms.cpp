// C++ STL
// Algorithms
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main()
{
  vector<int> v;
  v.push_back(45);
  v.push_back(23);
  v.push_back(3);
  v.push_back(15);

  //BINARY SEARCH TO FIND A VALUE
  if(binary_search(v.begin(),v.end(),45))
    cout<<"45 is present in the vector"<<endl;
  else
    cout<<"45 is not present in the vector"<<endl;

//SORTING IN ASCENDING 
  sort(v.begin(),v.end());
  for(int i:v)
    cout<<i<<" ";
  cout<<endl;
  
  //LOWER BOUND= INDEX OF A VALUE GREATER THAN OR EQUAL TO A PARTICULAR VALUE
  //UPPER BOUND= INDEX OF A VALUE STRICTLY GREATER THAN A PARTICULAR VALUE
  cout<<"Lower Bound: "<<lower_bound(v.begin(),v.end(),23)-v.begin()<<endl;
  cout<<"Upper Bound: "<<upper_bound(v.begin(),v.end(),23)-v.begin()<<endl;

  //FIND MAX AND MIN VALUES
  int a=34,b=90;
  cout<<"Max value: "<<max(a,b)<<endl;
  cout<<"Min value: "<<min(a,b)<<endl;  

  //SWAP 2 VALUES
  swap(a,b);
  cout<<a<<" "<<b<<endl;

  //REVERSE A STRING 
  string name="Arjun";
  reverse(name.begin(),name.end());
  cout<<name<<endl;

  //ROTATE 
  rotate(v.begin(),v.begin()+2,v.end());

  for(int i:v)
    cout<<i<<" ";
  
  return 0;
}