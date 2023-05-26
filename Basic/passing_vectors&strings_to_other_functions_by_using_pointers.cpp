#include<iostream>
#include <vector>
using namespace std;

void display(vector<string>* vctr)
{
  for(auto str:*vctr)
    {
      cout<<str<<" ";
    }
}
void display(int* array,int sentinel)
{
  while(*array!=sentinel)
    {
      cout<<*array++<<" ";
    }
}
int main()
{
  vector<string> v={"John","Thomas","Jacob"}; 
  display(&v);
  cout<<endl;
  int arr[]={1,2,3,4,5,-1};
  display(arr,-1);
  return 0;
}