#include<iostream>
#include<string>
#include<sstream>
using namespace std;

class Time
{
private:
  int hours;
  int minutes;
  int seconds;
public:
  void setHours(int h);
  void setMinutes(int m);
  void setSeconds(int s);
  int convert_to_sec();
};

void Time::setHours(int h)
{
  hours = h;
}
void Time::setMinutes(int m)
{
  minutes = m;
}
void Time::setSeconds(int s)
{
  seconds = s;
}
int Time::convert_to_sec()
{
  int time = hours*3600+minutes*60+seconds;
  return time;
}
int main()
{
  string time;
  Time t1;
  cout<<"Enter the time in HH:MM:SS format"<<endl;
  getline(cin,time);   

  istringstream iss(time);   //converting a string to object of class istringstream because getline needs an input_stream as first parameter
  string substr;

  getline(iss,substr,':');   //get a substring from iss until ':' occurs
  int val=stoi(substr);     // stoi converts the string to integer
  t1.setHours(val); 

  getline(iss,substr,':');
  val=stoi(substr);
  t1.setMinutes(val);

  getline(iss,substr,':');
  val=stoi(substr);
  t1.setSeconds(val);

  cout<<"The time in seconds is "<<t1.convert_to_sec()<<endl;
  return 0;
}
