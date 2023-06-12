//Serialization- operator overloading on file operations
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

class Student
{
public:  
  int rollno;
  string name;
  char section;
  Student(int r, string n,char s)
{
  rollno = r;
  name = n;
  section = s;
}
friend ofstream& operator<<(ofstream& ofs,Student& s);
friend ifstream& operator>>(ifstream& ifs,Student& s);
};

ofstream& operator<<(ofstream& ofs,Student& s)
{
  ofs<<s.name<<endl;
  ofs<<s.rollno<<endl;
  ofs<<s.section<<endl;
  return ofs;
}
ifstream& operator>>(ifstream& ifs,Student& s)
{
  ifs>>s.name>>s.rollno>>s.section;
  return ifs;
}
int main()
{
  Student s(1,"Raju",'A');
  ofstream ofs;
  ofs.open("Student.txt");
  ofs<<s;
  ofs.close();

  ifstream ifs;
  Student s1(2,"Ravi",'B');
  ifs.open("Student.txt");
  ifs>>s1;
  cout<<"Name: "<<s1.name<<endl<<"Roll No: "<<s1.rollno<<endl<<"Section: "<<s1.section<<endl;
  ifs.close();
  
  return 0;
}