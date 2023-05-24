/*GOAL: Practice writing to the console and learn 
 **the variables types available in C++
 **Print the sizes of each variable to the console.
 **Print them in the following order:
 **int, short, long, char, float, double, bool
 */

#include<iostream>
using namespace std;

// int,float = 4
// double, long = 8
// char, bool = 1
// short = 2 
int main()
{
  cout<<"The size of int is "<<sizeof(int)<<endl;
  cout<<"The size of short is "<<sizeof(short)<<endl;
  cout<<"The size of long is "<<sizeof(long)<<endl;
  cout<<"The size of char is "<<sizeof(char)<<endl;
  cout<<"The size of float is "<<sizeof(float)<<endl;
  cout<<"The size of double is "<<sizeof(double)<<endl;
  cout<<"The size of bool is "<<sizeof(bool)<<endl;
  return 0;
}