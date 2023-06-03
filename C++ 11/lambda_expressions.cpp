//Syntax of Lambda Expressions:
// [capture_list](parameter_list)->return_type{body of the fn}
#include <iostream>
using namespace std;

int main()
{
  int a=13,b=67;
  
  //By capture list
  auto f = [a,b](){cout<<"Lambda Expression for sum = "<<a+b<<endl;};
  f();

  auto ans = [&a,&b](){cout<<"Incremented values: "<<++a<<" "<<++b<<endl;};    //This wouldn't be possible if capture list had integers a and b instead of reference
  ans();

  
  //By passing parameters
  auto res=[](int x,int y){return x+y;}(10,20);
  cout<<"Lambda Expression for sum = "<<res<<endl;
  
   double z=[](double x,double y)->double{return x+y;}(70.5,100.8);
  cout<<"Lambda Expression for sum = "<<z<<endl;
  return 0;
}