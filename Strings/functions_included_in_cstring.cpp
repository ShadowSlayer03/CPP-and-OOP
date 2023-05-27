#include<iostream>
#include<cstring>
using namespace std;

int main()
{
  char name[25];
  cin>>name;
  cout<<"Your name is "<<name<<" and it has "<<strlen(name)<<" characters."<<endl;
  // length of string

  char new_name[25];
  strcpy(new_name,name);      // creating a copy
  cout<<"New name is "<<new_name<<endl;
  strcat(name,"Nambiar");    //concatenation
  cout<<name<<endl;

  cout<<strcmp(new_name,name)<<endl;   //comparing strings
  return 0;
}