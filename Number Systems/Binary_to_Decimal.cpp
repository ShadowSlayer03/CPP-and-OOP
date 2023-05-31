// Binary to Decimal
#include<iostream>
#include<math.h>
using namespace std;

int main()
{
  int i=0,num,rem,sum=0;
  cout<<"Enter the binary no"<<endl;
  cin>>num;
  while(num!=0)
    {
      rem=num%10;
      sum=sum+(rem*pow(2,i));
      i++;
      num=num/10;
    }
  cout<<"Required Decimal no is "<<sum<<endl;
  return 0;
}
