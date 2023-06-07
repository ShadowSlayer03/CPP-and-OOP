// C++ STL
// QUEUE
#include<iostream>
#include<queue>
using namespace std;

int main()
{
  queue<string> q;

  //INSERTING
  q.push("Arjun");
  q.push("Jeff");
  q.push("Harry");

  //DELETING
  q.pop();

  //FIRST AND LAST 
  cout<<"String at the front: "<<q.front()<<endl;
  cout<<"String at the rear: "<<q.back()<<endl;

  //SIZE
  cout<<"Size of queue: "<<q.size()<<endl;
  
  return 0;
}