// Smart Pointers = they function similar to normal pointers but have some additional unique properties
// unique_ptr = It can be used to point to only one unique object and no other unique pointers can access that object. Deallocates memory on its own after usage
// shared_ptr = Many pointers can point/access the same object and a reference count keeps track of the no of pointers pointing to the single object. Deallocates memory on its own after usage
// weak_ptr = Many pointers can point/access the same object and there is no reference count. Deallocates memory on its own after usage

#include<iostream>
#include<memory>
using namespace std;

class Rectangle
{
private:  
  int length;
  int breadth;
public:
Rectangle(int l, int b)
{
  length = l;
  breadth = b;
}
  int area()
{
  return length*breadth;
}
int perimeter()
{
  return 2*(length+breadth);
}
};


int main()
{
  unique_ptr<Rectangle>ptr1(new Rectangle(20,6));
  cout<<ptr1->area()<<endl;
  cout<<ptr1->perimeter()<<endl;

  unique_ptr<Rectangle>ptr2;
  //ptr2 = ptr1;       this will not work for unique pointers
  ptr2=move(ptr1);    //but this works and now ptr1 cannot be used to access the dynamic object

  shared_ptr<Rectangle>ptr3(new Rectangle(20,6));
  cout<<ptr3->area()<<endl;
  cout<<ptr3->perimeter()<<endl;

  shared_ptr<Rectangle>ptr4;
  ptr4=ptr3;    //this is possible for a shared pointer

  cout<<ptr4.use_count()<<endl;   //Used to print the reference count
  return 0;
}