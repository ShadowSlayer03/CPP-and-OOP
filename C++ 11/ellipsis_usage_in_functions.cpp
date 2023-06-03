// Ellipsis = used for passing variable number of parameters
#include<iostream>
using namespace std;

int sum(int n,...)
{
  va_list list;
  va_start(list,n);
  int i,s=0;
  for(i=0;i<n;i++)
    s+=va_arg(list,int);
  va_end(list);
  return s;
}
int main()
{
  cout<<sum(5,1,2,3,4,5)<<endl;;
  cout<<sum(2,50,60)<<endl;
  cout<<sum(7,56,67,78,89,90,34,12);
  
  return 0;
}