// Make customisations as required in the main fn like taking info from user.
#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:            // Class members are private by defaul, declaration is just to improve readability :)
  string name;       
  int empID;
  string gender;
public:
  Employee(string n, int e, string g): name{n},empID{e},gender{g} {}
  string getName() { return name; }
  int getEmpID()  { return empID; }
  string getGender()  { return gender; }
  void setName(string n)  { name=n; }
  void setEmpID(int eid)  { empID=eid; }
  void setGender(string g)  { gender=g; }
};
class Department: public Employee
{
private:
  string deptName;
  string workAssigned;
public:
  Department(string dept, string work,string n, int e, string g): 
  Employee(n,e,g)
 {
   deptName = dept;
   workAssigned = work;
 }
  string getDeptName() { return deptName; }
  string getWorkAssgn() { return workAssigned; }
  void setDeptName(string n) { deptName=n; }
  void setWorkAssgn(string w) { workAssigned=w; }
};
class LoanInfo: public Employee
{
public:
  string loanDetails;
  float loanAmt;
  LoanInfo(string n,int e, string g):Employee(n,e,g)
{
  string loan;float amount;
  cout<<"Enter the type of loan preferred(Car,House,Student etc): "<<endl;
  cin>>loan;
  cout<<"Enter the loan amount: "<<endl;
  cin>>amount;
  loanDetails = loan;
  loanAmt = amount;
}
};

int main()
{
  Department d("IT","Cloud Engineer","Jane Fischer",56,"Female");
  cout<<"Name: "<<d.getName()<<endl<<"Employee ID: "<<d.getEmpID()<<endl<<"Gender: "<<d.getGender()<<endl;

  cout<<endl<<"Create Loan Object"<<endl;
  LoanInfo l("Raghav Kumar",78,"Male");
  cout<<"Name: "<<l.getName()<<endl<<"Employee ID: "<<l.getEmpID()<<endl<<"Gender: "<<l.getGender()<<endl<<"Loan Type: "<<l.loanDetails<<endl<<"Loan Amount: "<<l.loanAmt<<endl;
  
  return 0;
}
