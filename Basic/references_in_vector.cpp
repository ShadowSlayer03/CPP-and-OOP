#include<iostream>
#include <vector>
using namespace std;

int main()
{
  vector<string>stooges{"Larry","Frank","Joe"};
  for(auto &str:stooges)     // if this is auto str then no changes woud have happened to the vector called stooges 
    {
      str="Funny";
    }
  for(auto str:stooges)
    {
      cout<<str<<" ";
    }
  return 0;
}