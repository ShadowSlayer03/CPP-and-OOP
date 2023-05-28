// Decimal Number to Binary 
#include<iostream>
using namespace std;

int main()
{
  int i=0,num,rem;
  int arr[50];
  cout<<"Enter the decimal number: "<<endl;
  cin>>num;
  while(num!=0)
    {
      rem=num%2;
      arr[i++]=rem;
      num=num/2;
    }
  for(i=i-1;i>=0;i--)
    {
      cout<<arr[i];
    }
  return 0;
}
