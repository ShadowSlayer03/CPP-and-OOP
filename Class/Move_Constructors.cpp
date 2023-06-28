/* 
Move Constructors:
1. Used with R value(values unlike variables and which don't have memory allocation. Eg 10,20) references. Instead of creating a copy of a temporary object, we can just move it to destination so that efficient utilisation of resources can take place.
2. In case if pointers are involved, instead of creating a deep copy, we create a shallow copy and then make the initial pointer as null.
*/  
#include<iostream>
#include<vector>
using namespace std;

class Basic
{
public:
  int* data;
  Basic(int d);
  Basic(const Basic& b);
  Basic(Basic&& source) noexcept;
  ~Basic();
};

Basic::Basic(int d)
{
  data = new int;  //Making a data value in heap
  *data=d;
  cout<<"One-arg Constructor"<<endl;
}
Basic::Basic(const Basic& b)    // & - reference to L-value
{
  data = new int;
  *data = *b.data;
  cout<<"Deep Copy Constructor"<<endl;
}
Basic::Basic(Basic&& source) noexcept  // && - reference to R-value
:data{source.data}
{
  source.data = nullptr;
  cout<<"Move Constructor"<<endl;
}
Basic::~Basic()
{
  if(data!=nullptr)
    cout<<"Destructor called for "<<*data<<endl;
  else
    cout<<"Destructor called for nullptr"<<endl;
  delete data;
}
int main()
{
  vector<Basic> vec;

  vec.push_back(Basic{10});    // // creating an object of Basic class with the value 10, moving it into the vector using the move constructor, and finally destroying the original object
  vec.push_back(Basic{20});    // Since the temp copied objects are short-lived, there is no need to call a deep copy constructor 
  vec.push_back(Basic{30});    // So we use the move constructor to basically perform a shallow copy and then make the initial pointer to NULL
  vec.push_back(Basic{40});
  vec.push_back(Basic{50});
  return 0;
}