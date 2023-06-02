//Inclass Initialiser and Delegation of Constructors
// Inclass Initialiser = Initialise data values in a class during declaration of the class
// Delegation of Constructors = Make one type of constructor call another type 
#include<iostream>
using namespace std;

class My
{
private:
  int x=78;   //Inclass Initialisation
  int y=67;
public:
  void fun()
{
  cout<<"x = "<<x<<endl<<"y = "<<y<<endl;
}
My(int a,int b)
{
  x=a;
  y=b;
}
My():My(1,1)      //Constructor delegation
{}
};
int main()
{
  My m;
  m.fun();
  return 0;
}