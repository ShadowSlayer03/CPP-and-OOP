// Only a single copy of the static variable is created and changes are made to it whenever a new object is initialised.
// Static functions can also be present in classes but they can access only static variables
#include<iostream>
using namespace std;

class My
{
private:
  int x;
public:
  static int count;
  My(int x)
{
  this->x = x;
  count++;
}
int getX()
{
  return x;
}
static int changeCount()
{
  //x = 89;    Static functions can only access/make changes to static variables
  count = 78;
  return count;
}
};
int My::count = 0;
int main()
{
  My m(98);
  My p(78);
  cout<<m.count<<endl;
  cout<<m.changeCount()<<endl;   //Accessed using an object
  cout<<My::changeCount()<<endl;  //Accessed using the class Name
  return 0;
}