#include<iostream>
using namespace std;

class Complex
{
private:
  int real;
  int img;
public:
  Complex(int r=0,int i=0);
  int getReal();
  int getImg();
  Complex ADD(int a, Complex s);
  Complex ADD(Complex& s1, Complex& s2);
};
Complex::Complex(int r,int i)
:real{r},img{i}
{}
Complex Complex::ADD(int a, Complex s)
{
  Complex result;
  result.real = a+s.real;
  result.img = s.img;
  return result;
}
Complex Complex::ADD(Complex& s1, Complex& s2)
{
  Complex result;
  result.real = s1.real+s2.real;
  result.img = s1.img+s2.img;
  return result;
}
int Complex::getReal()
{
  return real;
}
int Complex::getImg()
{
  return img;
}
int main()
{
  Complex c1(23,45);
  Complex c2(35,89);

  Complex answer = c1.ADD(4,c1);
  cout<<answer.getReal()<<"+i"<<answer.getImg()<<endl;

  answer = c1.ADD(c1,c2);
  cout<<answer.getReal()<<"+i"<<answer.getImg()<<endl;
  return 0;
}
