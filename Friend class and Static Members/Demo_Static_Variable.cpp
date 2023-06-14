// Demo Static Variables
#include<iostream>
#include<string>
using namespace std;

class Student
{
private:
  int rollno;
  string name;
public:
  static int admissionNo;
  Student(string name)
{
  admissionNo++;
  rollno = admissionNo;
  this->name = name;
}
void display()
{
  cout<<"Name: "<<name<<endl<<"Roll No: "<<rollno<<endl;
}
};

int Student::admissionNo=0;

int main()
{
  Student s1("Ravi");
  Student s2("Shubham");
  Student s3("Arjun");
  // 2 ways of accessing the static member
  cout<<s2.admissionNo<<endl;
  cout<<s3.admissionNo<<endl;
  cout<<Student::admissionNo<<endl;
  //
  s1.display();
  s2.display();
  return 0;
}
