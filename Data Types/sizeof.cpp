#include<iostream>
#include<climits>
using namespace std;

int main()
{
  cout<<sizeof(char)<<endl;
  cout<<sizeof(int)<<endl;
  cout<<sizeof(float)<<endl;
  cout<<sizeof(long)<<endl;
  cout<<sizeof(double)<<endl;
  cout<<sizeof(long double)<<endl;

  cout<<CHAR_MIN<<" "<<CHAR_MAX<<endl;
  cout<<INT_MIN<<" "<<INT_MAX<<endl;
  return 0;
}
