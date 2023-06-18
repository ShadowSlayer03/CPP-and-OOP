// Factorial of any number
#include<iostream>
using namespace std;

// Factorial by recursion
int factRec(int n)
{
  if(n==1)
    return 1;
  else 
    return n*factRec(n-1);
}

// Factorial by iteration
int fact(int n)
{
  int sum=1,i;
  for(i=1;i<=n;i++)
      sum*=i;
  return sum;
}

int main()
{
  int num;
  cout<<"Enter any number:"<<endl;
  cin>>num;
  cout<<factRec(num)<<endl;
  cout<<fact(num)<<endl;
  return 0;
}
