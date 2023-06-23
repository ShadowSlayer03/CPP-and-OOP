//By using templates, we can make class methods and variables work for any data type
#include<iostream>
using namespace std;

template<class T>
class Calculate
{
public:
  T a,b;            // T will be replaced by whatever datatype was mentioned in the main function
  Calculate(T n1, T n2);
  T addition();
  T subtraction();
  T multiplication();
  T division();
};

template<class T>
Calculate<T>::Calculate(T n1, T n2)
{
  a=n1; b=n2;
}

template<class T>
T Calculate<T>::addition()
{
  return a+b;
}

template<class T>
T Calculate<T>::subtraction()
{
  return a-b;
}

template<class T>
T Calculate<T>::multiplication()
{
  return a*b;
}

template<class T>
T Calculate<T>::division()
{
  return a/b;
}

int main()
{
  float a,b;                                           //Change here
  int option;
  cout<<"Welcome to the Simple Calculator using Templates"<<endl;
  cout<<"Enter the numbers:"<<endl;
  cin>>a>>b;
  Calculate<float> c1(a,b);                          // Also change the datatype here to make the functions valid for any data type
  cout<<"Enter the operation to be performed:"<<endl;
  cout<<"1.Addition"<<endl<<"2.Subtraction"<<endl<<"3.Multiplication"<<endl<<"4.Division"<<endl;
  cin>>option;
  switch(option)
    {
      case 1:
        {
          cout<<"The sum is "<<c1.addition();
          break;
        }
      case 2:
        {
          cout<<"The difference is "<<c1.subtraction();
          break;
        }
      case 3:
        {
          cout<<"The product is "<<c1.multiplication();
          break;
        }
      case 4:
        {
          if(c1.b==0)
          {
            cout<<"Division by zero undefined"<<endl;
            return -1;
          }
          cout<<"The quotient is "<<c1.division();
          break;
        }
      default:
        {
          cout<<"Please enter a valid option"<<endl;
          break;
        }
    }
  return  0;
  
}
