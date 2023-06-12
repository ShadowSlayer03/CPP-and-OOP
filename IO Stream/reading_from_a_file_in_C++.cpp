#include<fstream>
#include<iostream>
using namespace std;

int main()
{
  
  ifstream infile;  // class objectname
  //Open the file
  infile.open("My.txt");
  //Creating a variable to store the text read from file
  char data[50];
  
  //Storing the text read from the file to a variable and Printing the data from file to console until the end of file
  while(!infile.eof())
    {
      infile>>data;
      cout<<data<<endl;
    }
  //Closing the file
  infile.close();
  
  return 0;
}