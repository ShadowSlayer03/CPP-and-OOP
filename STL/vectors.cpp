// We can change the data structure from vector to anything else, but we need to know corresponding functions and use them
#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<int> V{12,23,34,45};
  V.push_back(56);
  V.push_back(78);
  V.pop_back();

  cout<<"Display using for each loop"<<endl;
  for(int element:V)
    cout<<element<<endl;

  cout<<"Display using iterator"<<endl;
  vector<int>::iterator itr;
  for(itr=V.begin();itr!=V.end();itr++)
    cout<<*itr<<endl;
  
  return 0;
}