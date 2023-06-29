#include<iostream>
using namespace std;

class STACK
{
private:
  int top;
  int size;
  int* arr;
public:
  STACK(int size);
  STACK operator+(int element);
  int operator--(int i);
  friend ostream& operator<<(ostream& os,STACK& st);
};
STACK::STACK(int size)
{
    this->size=size;
    arr = new int[this->size];
    top=-1;
}
STACK STACK::operator+(int element)
{
  if(this->top==this->size-1)
    cout<<"Stack overflow"<<endl;
  else
  {
    this->top++;
    this->arr[this->top] = element;
  }
  return *this;
}
int STACK::operator--(int i)
{
  int x=-1;
  if(this->top==-1)
    cout<<"Stack Underflow"<<endl;
  else
       x = this->arr[this->top--];
  return x;
}
ostream& operator<<(ostream& os,STACK& st) 
{
     int i;
     if(st.top==-1)
     {
         cout<<"No elements to display"<<endl;
         return os;
     }
    
    for(i=st.top;i>=0;i--)
    os<<st.arr[i]<<endl;
    return os;
}
int main()
{
  STACK s(10);
  s=s+56;
  s=s+78;
  s=s+89;
  s=s+90;
  s=s+590;
  cout<<s;
  int element = s--;
  cout<<element<<" was popped from the stack"<<endl;
  element = s--;
  cout<<element<<" was popped from the stack"<<endl;
  cout<<s;
  return 0;
}
