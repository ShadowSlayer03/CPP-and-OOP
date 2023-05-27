#include<iostream>
#include<cctype>
using namespace std;

int main()
{
  char c='p';
  cout<<isalpha(c)<<endl;  //Returns some positive value if alphabet, else 0
  cout<<isalnum(c)<<endl;  //Returns some positive value if alphanumeric, else 0
  cout<<isdigit(c)<<endl;  //Returns some positive value if digit, else 0
  cout<<islower(c)<<endl;  //Returns some positive value if lowercase, else 0
  cout<<isupper(c)<<endl;  //Returns some positive value if uppercase, else 0
  cout<<isprint(c)<<endl;  //Returns some positive value if printable, else 0
  cout<<isspace(c)<<endl;  //Returns some positive value if whitespace, else 0

  cout<<(char)tolower(c)<<endl;
  cout<<(char)toupper(c)<<endl;
  
  return 0;
