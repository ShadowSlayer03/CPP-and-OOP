// Accessor and Mutator
#include<iostream>
using namespace std;

class Rectangle
{
  private:
  int length;
  int breadth;

  public:
  int getLength()      //Accessor
  {
    return length;
  }
  int getBreadth()    //Accessor
  {
    return breadth;
  }
  void setLength(int l)    //Mutator
  {
    length=l>=0?l:0;
    if(length==0)
      cout<<"Length cannot be -ve so defaulted to 0"<<endl;
  }  
  void setBreadth(int b)    //Mutator
  {
    breadth=b>=0?b:0;
    if(breadth==0)
      cout<<"Breadth cannot be -ve so defaulted to 0"<<endl;
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
  Rectangle r1;
  //Writing length and breadth
  r1.setLength(-10);
  r1.setBreadth(20); 
  //Reading length and breadth
  cout<<"Length = "<<r1.getLength()<<endl;
  cout<<"Breadth = "<<r1.getBreadth()<<endl;
  
  cout<<"Area = "<<r1.area()<<endl;
  cout<<"Perimeter = "<<r1.perimeter()<<endl;
  return 0;
}
