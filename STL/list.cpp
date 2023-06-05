// C++ STL
// List = Doubly Linked List
#include<iostream>
#include<list>
using namespace std;

int main()
{
  list<int> l;
  list<int> n(7,900);    // declaring and initializing 
  for(int i:n)
    cout<<i<<" ";
  
  //ADDING AND DELETING ELEMENTS FROM THE FRONT AND BACK
  l.push_back(2);
  l.push_back(3);
  l.push_back(4);
  l.push_front(1);

  l.pop_back();
  l.pop_front();

  //ERASING THE ELEMENTS
  l.erase(l.begin());

  //SIZE
  cout<<l.size()<<endl;
  
  for(int i:l)
    cout<<i<<endl;
  return 0;
}