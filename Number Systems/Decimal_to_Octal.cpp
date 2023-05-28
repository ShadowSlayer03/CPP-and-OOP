// Decimal Number to Octal(Base 8)
// Octal Numbers- 0,1,2,3,4,5,6,7
#include<iostream>
using namespace std;

int main()
{
  int i=0,num,rem;
  int arr[50];
  cout<<"Enter decimal no:"<<endl;
  cin>>num;
  while(num!=0)
    {
      rem=num%8;
      arr[i++] = rem;
      num/=8;
    }
  for(i=i-1;i>=0;i--)
    cout<<arr[i];
  return 0;
}