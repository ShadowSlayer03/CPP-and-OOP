// Templates in C++
// When there is same piece of code, but it has to work for different data types, usually we use function overloading to create 2 functions of same name but different return types.
// But with templates we won't have to do this.

#include<iostream>

using namespace std;

template<class T>
T maximum(T a, T b)
{
  if(a>b)
    return a;
  else
    return b;
}

int main()
{
  cout<<maximum(3,4)<<endl;
  cout<<maximum(4.5,6.9)<<endl;
  return 0;
}