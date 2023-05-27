// CPP Strings
// They are a part of Standard Template Library
// Main difference is that they are dynamic in size, while C strings are static.
#include<iostream>
#include<string>
using namespace std;

int main()
{
  //Declaration 
  string s1 = "Hello";
  string s2 = s1;
  string s3 {s2,4};     // Take the 4th character from s2
  string s4 {s1,2,3};   // Take 3 characters from s1, from 2nd index onwards
  string s5 (5,'I');
  cout<<s1<<endl<<s2<<endl<<s3<<endl<<s4<<endl<<s5<<endl;

  //Concatenation
  string s6 = s1+" "+s5;
  cout<<s6<<endl;

  //Accessing characters
  cout<<s6[7]<<" "<<s6.at(7)<<endl;

  //Modifying characters
  s6.at(8)='J';
  s6.at(9)='L';
  cout<<s6<<endl;

  //Comparing 
  cout<<(s1==s2)<<endl;  //True 1
  cout<<(s1==s3)<<endl;  //False 0
  cout<<(s1!=s2)<<endl;  //False 0
  cout<<(s1!=s3)<<endl;  //True 1
  cout<<(s1>s3)<<endl;   //False 0, because 'H' has lower ASCII than 'o'
  cout<<(s1<s3)<<endl;   //True 1, because 'H' has lower ASCII than 'o'

  //Substring
  string s8 = "Hello I'm Jello";
  string sub = s8.substr(10,4);
  cout<<sub<<endl;

  //Find the starting index of a substring
  cout<<s8.find("Hello")<<endl;   //0
  cout<<s8.find("ello")<<endl;    //1 because first instance of ello starts here
  cout<<s8.find("ello",7)<<endl;  //11 because it starts searching for substring from 7th index onwards 

  //Clearing a string or erasing a substring 
  s8.erase(0,6);
  cout<<s8<<endl;
  s8.clear();

  //Length of string
  cout<<s1.length()<<endl;

  //Taking input
  string s9;
  cin>>s9;  // This will take input only until whitespace(" ")
  getline(cin,s9);   //This will take input until newline(\n)
  getline(cin,s9,'x');   //This will take all the input until a character 'x'
  return 0;
}