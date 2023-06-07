// C++ STL
// STACK
#include<iostream>
#include<stack>
using namespace std;

int main()
{
  stack<int> s;

  //ENTERING VALUES
  s.push(12);
  s.push(23);
  s.push(34);
  s.push(45);

  //DELETING VALUES
  s.pop();

  //SIZE
  cout<<"Size: "<<s.size()<<endl;
  
  //TOP ELEMENT
  cout<<"Top Element: "<<s.top()<<endl;

  //CHECK EMPTY
  cout<<s.empty()<<endl;
  return 0;
}