#include<iostream>
using namespace std;

template<class T>
class Stack
{
private:
  int top;
  int size;
  T* arr;
public:
  Stack(int s);
  void push(T num);
  T pop();
  void display();
};

template<class T>
Stack<T>::Stack(int s)
{
  top =-1;
  size =s;
  arr = new T[size];
}

template<class T>
void Stack<T>::push(T num)
{
  if(top==size-1)
  {
    cout<<"Stack overflow"<<endl;
    return;
  }
  top++;
  arr[top] = num;
}

template<class T>
T Stack<T>::pop()
{
  T x = -1;
  if(top==-1)
    cout<<"Stack Underflow"<<endl;
  else
  {
    x = arr[top];
    top--;
  }
  return x;
}

template<class T>
void Stack<T>::display()
{
  int i;
  for(i=top;i>=0;i--)
    {
      cout<<arr[i]<<endl;
    }
  cout<<endl;
}
int main()
{
  Stack<char> s(10);
  s.push('a');
  s.push('b');
  s.push('c');
  s.display();
  s.pop();
  s.display();
  s.pop();
  s.display();
  return 0;
}
