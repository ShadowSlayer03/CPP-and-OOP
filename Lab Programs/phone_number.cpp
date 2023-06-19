#include<iostream>
using namespace std;

class Phone
{
public:
  int area_code;
  int exchange;
  int number;
void printNum()
{
  if(area_code<100)
    cout<<"(0"<<area_code<<") "<<exchange<<"-"<<number<<endl;
  else
    cout<<"("<<area_code<<") "<<exchange<<"-"<<number<<endl;
}
};
int main()
{
  Phone p1,p2;
  p1.area_code = 44;
  p1.exchange= 234;
  p1.number=8900;

  cout<<"Enter the number in this format (area_code exchange number): "<<endl;
  cin>>p2.area_code>>p2.exchange>>p2.number;

  cout<<"The numbers are:"<<endl;
  p1.printNum();
  p2.printNum();
  return 0;
}
