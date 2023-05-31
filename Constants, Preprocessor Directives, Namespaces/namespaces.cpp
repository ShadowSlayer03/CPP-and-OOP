// C++ doesn't support 2 functions with the same name and same parameters, throws a compiler error.
// If we need to create them, then we can do so by putting them in separate namespaces and calling them in main fn with scope resolution.

#include<iostream>
using namespace std;

namespace First
{
  void fun()
  {
  cout<<"First"<<endl;
  }
}
namespace Second
{
  void fun()
  {
  cout<<"Second"<<endl;
  }
}

int main()
{
  Second::fun();
  First::fun();
  return 0;
}
