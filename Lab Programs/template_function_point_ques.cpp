#include<iostream>
using namespace std;

template<typename T>
void thirdPoint(T x1,T x2,T y1, T y2)
{
  T tx = x1+x2;    //x-coordinate of third point
  T ty = y1+y2;    //y-coordinate of third point
  cout<<"Third Point: "<<"("<<tx<<","<<ty<<")"<<endl;
}

int main()
{
  float x1,x2,y1,y2; //Change here to check for diff datatypes 
  cout<<"Enter the x and y coordinates of first point"<<endl;
  cin>>x1>>y1;
  cout<<"Enter the x and y coordinates of second point"<<endl;
  cin>>x2>>y2;
  thirdPoint(x1,x2,y1,y2);
  return 0;
}
