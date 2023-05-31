// Binary to Hexadecimal
// For eg: 0100 1100 1010  = 4CA
// In order to convert hexadecimal to binary, take each individual digit, convert to their decimal form and then find the binary value of that decimal in 4 digits. Combine all of these binary to get the result. 
#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;

int BinToDec(int n)
{
  int rem,res=0,i=0;
  while(n!=0)
    {
      rem = n%10;
      res += rem*pow(2,i);
      i++;
      n/=10;
    }
  return res;
}
int main()
{
  long int num;
  int rem,arr[20],i=0;
  cout<<"Enter the binary number: "<<endl;
  cin>>num;
  while(num!=0)
    {
      rem = num%10000;
      arr[i++]=BinToDec(rem);
      num=num/10000;
    }
  int size=i,index;
  char hex[6] = {'A','B','C','D','E','F'};
  reverse(arr,arr+i);
  for(i=0;i<size;i++)
    {
      if(arr[i]<10)
        cout<<arr[i];
      else
      {
        cout<<hex[arr[i]%10];
      }
    }
  return 0;
}