#include<iostream>
using namespace std;

class DB;
class DM
{
public:
  int m;
  int cm;
void setLength(int m, int cm)
{
  this->m=m;
  this->cm=cm;
}
friend void addition(DM a, DB b,int option);
};

class DB
{
public:
  int feet;
  int inches;
public:
  void setLength(int f, int i)
{
  feet=f;
  inches=i;
}
friend void addition(DM a, DB b,int option);
};

void addition(DM a, DB b,int option)
{
  switch(option)
    {
      case 1:
        {
          DM c;
          float sum = a.m*100+a.cm+b.feet*30.48+b.inches*2.54;
          int meters= sum/100;
          float decimalPart = sum - meters*100;
          c.m = meters;
          c.cm = decimalPart;
          cout<<"The result after adding is: "<<c.m<<"meters and "<<c.cm<<"centimeters"<<endl;
          break;
        }
      case 2:
        {
          DB c;
          float sum = a.m*39.37+0.394*a.cm+b.feet*12+b.inches;
          int feet= sum*0.0833;
          float decimalPart = sum - feet*12; 
          c.feet = feet;
          c.inches = decimalPart;
          cout<<"The result after adding is: "<<c.feet<<"feet and "<<c.inches<<"inches"<<endl;
          break;
        }
      default:
        {
          cout<<".Invalid option given.Choose among the available options."<<endl;
          break;
        }
    }
}

int main()
{
  int option;
  DM obj1;
  DB obj2;
  cout<<"Creating object of DM class:"<<endl;
  cout<<"Enter the length in this format(metres centimeters)"<<endl;
  cin>>obj1.m>>obj1.cm;

  cout<<"Creating object of DB class:"<<endl;
  cout<<"Enter the length in this format(feet inches)"<<endl;
  cin>>obj2.feet>>obj2.inches;
  
  cout<<"Select units in which results are to be displayed:"<<endl<<"1.Meters and centimeters"<<endl<<"2.Feet and Inches"<<endl;
  cin>>option;
  addition(obj1,obj2,option);

  return 0;
}
