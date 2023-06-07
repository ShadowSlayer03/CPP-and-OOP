// C++ STL
// Set = Stores in sorted order, there will be no repeated elements 
// It is implemented as a self-balancing BST
#include<iostream>
#include<set>
using namespace std;

int main()
{
  //DECLARE AND INITIALIZE
  set<int> s {0,1,1,1,2,3,4,5};

  //INSERT VALUES
  s.insert(6);

  //NO OF TIMES A PARTICULAR VALUE OCCURS IN THE SET
  cout<<s.count(6)<<endl;
  cout<<s.count(1)<<endl;

  //ERASE A SPECIFIC VALUE
  set<int>::iterator it = s.begin();
  it++;
  s.erase(it);
  
  for(int i:s)
    cout<<i<<" ";
  cout<<endl;
  
//FIND A PARTICULAR VALUE AND START PRINTING THE REST OF SET FROM THERE
  set<int>::iterator itr=s.find(5);
  for(auto it=itr;it!=s.end();it++)
    cout<<*it<<" ";
  return 0;
}