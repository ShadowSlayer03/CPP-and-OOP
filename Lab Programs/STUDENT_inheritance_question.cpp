#include <iostream>
using namespace std;

class UGSTUDENT;
class PGSTUDENT;

class STUDENT
{
private:
  string USN;
  string name;
  int age;
public:
  int getAge(){ return age;}
  string getUSN(){ return USN;}
  string getName(){ return name;}
  void setAge(int a){ age=a;}
  void setUSN(string usn){ USN=usn;}
  void setName(string n){ name=n;}
  friend void getDetails(UGSTUDENT* ug, PGSTUDENT* pg,int size);
};

class UGSTUDENT: public STUDENT
{
public:
  int semNo;
  float fees;
  double stipend;
  friend void getDetails(UGSTUDENT* ug, PGSTUDENT* pg,int size);
};

class PGSTUDENT: public STUDENT
{
public:
  int semNo;
  float fees;
  double stipend;
  friend void getDetails(UGSTUDENT* ug, PGSTUDENT* pg,int size);
};

void getDetails(UGSTUDENT* ug, PGSTUDENT* pg,int size)
{
  string usn,name;
  int age,i;
  cout<<"Enter UG student details:"<<endl;
  for(i=0;i<size;i++)
    {
      cout<<"Enter the USN"<<endl;
      cin.ignore();    // Ignore the newline character from previous input
      getline(cin,usn);
      ug[i].setUSN(usn);
      cout<<"Enter the Name"<<endl;
      getline(cin,name);
      ug[i].setName(name);
      cout<<"Enter the Age"<<endl;
      cin>>age;
      ug[i].setAge(age);
      // cout<<"Enter the Semester"<<endl;
      // cin>>ug[i].semNo;
      // cout<<"Enter the Fees"<<endl;
      // cin>>ug[i].fees;
      // cout<<"Enter the Stipend"<<endl;
      // cin>>ug[i].stipend;
    }
  cout<<"Enter PG student details:"<<endl;
  for(i=0;i<size;i++)
    {
      cout<<"Enter the USN"<<endl;
      cin.ignore();    // Ignore the newline character from previous input
      getline(cin,usn);
      pg[i].setUSN(usn);
      cout<<"Enter the Name"<<endl;
      getline(cin,name);
      pg[i].setName(name);
      cout<<"Enter the Age"<<endl;
      cin>>age;
      pg[i].setAge(age);
      // cout<<"Enter the Semester"<<endl;
      // cin>>pg[i].semNo;
      // cout<<"Enter the Fees"<<endl;
      // cin>>pg[i].fees;
      // cout<<"Enter the Stipend"<<endl;
      // cin>>pg[i].stipend;
    }  
}

int main() 
{
  int i,size=5;
  UGSTUDENT ug[size];
  PGSTUDENT pg[size];    // Both of these arrays can be initialised during declaration or can be taken from the user.
  getDetails(ug,pg,size);  // Here the values are taken from the user using this fn
  int ageSum=0;
  for(i=0;i<size;i++)
    ageSum+=ug[i].getAge();
  cout<<"Average age of all UG students is "<<ageSum/size<<endl;
  ageSum=0;
  for(i=0;i<size;i++)
    ageSum+=pg[i].getAge();
  cout<<"Average age of all PG students is "<<ageSum/size<<endl;
  return 0;
}
