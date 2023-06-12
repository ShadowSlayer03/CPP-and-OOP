#include<fstream>
#include<iostream>
using namespace std;

int main()
{
  
  ofstream outfile;  // class objectname
  //Open the file
  outfile.open("My.txt");
  //Getting the variable from the user and Writing it to the file
  char data[50];
  cout<<"Enter data: "<<endl;
  cin.getline(data,50); 

  outfile<<data<<endl;
  //Closing the file
  outfile.close();
  
  return 0;
}