// C++ STL
// MAP = It has key and values
// Different keys can be connected to the same value but one key cannot be connected to more than one value
#include<iostream>
#include <map>
using namespace std;

int main()
{
  map<int,string> m;
  //ASSIGN VALUES
  m[1] = "SCORPIO";
  m[2] = "CITY";
  m[13] = "VERNA";
  m[13] = "CIVIC";  //When I assign a new value, automatically old value is overwritten

  m.insert({4,"GALLARDO"});
  //ERASE
  m.erase(1);

  //COUNT OF OCCURRENCES OF A KEY
  cout<<m.count(13)<<endl;  //1
  cout<<m.count(5)<<endl;   //0


  //TO START PRINTING ALL KEY VALUES AFTER m.find() VALUE
  map<int,string>::iterator itr;
  itr=m.find(4);    
  for(auto i=itr;i!=m.end();i++)
    cout<<(*i).first<<" ";     //Keys are 2,4,13 but iterator starts from 4 hence 2 values are printed  

  
  for(auto i:m)
    cout<<"("<<i.first<<","<<i.second<<")"<<endl;
    return 0;
}