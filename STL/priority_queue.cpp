// C++ STL
// Priority Queues  
#include<iostream>
#include<queue>
using namespace std;

int main()
{
  // Max Heap
  priority_queue<double> maxi;
  maxi.push(12.4);
  maxi.push(23.6);
  maxi.push(34.7);
  maxi.push(67.8);
  maxi.push(56.9);
  cout<<"Size: "<<maxi.size()<<endl;
  int i,n=maxi.size();
  for(i=0;i<n;i++)
    {
      cout<<maxi.top()<<" ";
      maxi.pop();
    }
cout<<endl;
  // Min Heap
  priority_queue<double,vector<double>, greater<int>> mini;
  mini.push(12.4);
  mini.push(23.6);
  mini.push(34.7);
  mini.push(67.8);
  mini.push(56.9);
  cout<<"Size: "<<mini.size()<<endl;
  int m=mini.size();
  for(i=0;i<m;i++)
    {
      cout<<mini.top()<<" ";
      mini.pop();
    }
  return 0;
}