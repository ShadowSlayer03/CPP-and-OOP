// Queue 
#include<iostream>
using namespace std;
class Queue
{
private:
  int rear;
  int front;
  int size;
  int* Q;
public:
  Queue(){front=rear=-1;size=10;Q = new int[size];}
  Queue(int size){front=rear=-1;this->size=size;Q = new int[this->size];}
  void enqueue(int x);
  int dequeue();
  void display();
};
void Queue::enqueue(int x)
{
  if(rear==size-1)
    cout<<"Queue is full"<<endl;
  else
  {
    rear++;
    Q[rear] = x;
  }
}
int Queue::dequeue()
{
  int x=-1;
  if(front==rear)
    cout<<"Queue is empty"<<endl;
  else
  {
    x=Q[front+1];
    front++;
  }
  return x;
}
void Queue::display()
{
  int i;
  for(i=front+1;i<=rear;i++)
    {
      cout<<Q[i]<<endl;
    }
  cout<<endl;
}
int main()
{
  Queue q(5);
  q.enqueue(10);
  q.enqueue(20);
  q.enqueue(30);
  q.display();
  q.dequeue();
  q.display();
  return 0;
}