// Decimal Number to Hexadecimal(Base 16)
// Hex Numbers- 0,1,2,3,4,5,6,7,8,9,A,B,C,D,E,F
#include<iostream>
using namespace std;

int main()
{
  int i=0,num,rem,j;
  int arr[50];
  char hex[6]={'A','B','C','D','E','F'};
  cout<<"Enter decimal no:"<<endl;
  cin>>num;
  while(num!=0)
    {
      rem=num%16;
      arr[i++] = rem;
      num/=16;
    }
  for(i=i-1;i>=0;i--)
    {
      if(arr[i]<10)
        cout<<arr[i];
      else
      {
        j=arr[i]%10;
        cout<<hex[j];
      }
    }
  return 0;
}