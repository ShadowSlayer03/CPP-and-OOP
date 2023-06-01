#include<iostream>
using namespace std;

int max(int a, int b)
{
  return a>b?a:b;
}
int min(int a, int b)
{
  return a<b?a:b;
}
int main()
{
  int(*fp)(int,int);
  fp=max;
  cout<<(*fp)(5,10)<<endl;
  fp=min;
  cout<<(*fp)(5,10)<<endl;
  return 0;
}