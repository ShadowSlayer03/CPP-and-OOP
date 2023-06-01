// Const Methods and Objects
#include<iostream>
using namespace std;

class Player
{
private:
  string name;
  int health;
  double xp;
public:
  Player(string n="Name",int h=100,double x=0);
  Player(const Player& p);
  string getName() const;   //without the const keyword,this fn also cannot access the const object b/c it could potentially change the const object values
  void setName(string n);
};
Player::Player(string n,int h,double x)
:name{n},health{h},xp{x}
{
  cout<<"Three-args constructor"<<endl;
}
Player::Player(const Player& p)
:name{p.name},health{p.health},xp{p.xp}
{
  cout<<"Copy Constructor called for "<<name<<endl;
}
string Player::getName() const
{
  return name;
}
void Player::setName(string n)
{
  name=n;
}
int main()
{
  const Player Hero("Arjun",80,150);
  
  //Hero.setName("Doppel");  Clearly not possible since constants shouldn't be modified
  cout<<Hero.getName()<<endl;
  return 0;
}