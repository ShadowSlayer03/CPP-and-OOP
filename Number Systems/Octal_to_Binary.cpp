//Octal to Binary
// For eg: 274 can be converted as 010 111 100
// Similarly to convert a binary back to octal, we need to take groups of 3 digits and find their corresponding decimal value and combine these digits together to find corresponding octal value
#include<iostream>
#include<math.h>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;

string ConvertToBinary(int n)
{
  int i=0,rem;
  int arr[20];
  while(n!=0)
    {
      rem=n%2;
      arr[i++]=rem;
      n=n/2;
    }
  int size=i;
    while(size<3)
      {
        arr[size]=0;
        size++;
      }
  reverse(arr,arr+size);
  stringstream ss;
    for (i = 0; i < size; i++) {
        ss << arr[i];
    }
  string result = ss.str();
  return result;
}
int countDigits(int num)
{
  int count=0;
  while(num!=0)
    {
      count++;
      num/=10;
    }
  return count;
}
int main()
{
  long int val;
  int num,digits,rem;
  string result;
  cout<<"Enter octal value: "<<endl;
  cin>>val;
  digits= countDigits(val);
  while(digits!=0)
    {
      int powResult = static_cast<int>(pow(10, digits));
      val = val % powResult;
      num=val/(pow(10,digits-1));
      result += ConvertToBinary(num);
      digits--;
    }
  cout<<"Required binary value is "<<result<<endl;
  return 0;
}