// Default Constructor
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
  string getName();
  int getHealth();
  double getXP();
};
Player::Player(string n,int h,double x)
:name{n},health{h},xp{x}
{
  cout<<"Three-args constructor"<<endl;
}
string Player::getName()
{
  return name;
}
int Player::getHealth()
{
  return health;
}
double Player::getXP()
{
  return xp;
}
int main()
{
  Player SideCharacter;
  cout<<SideCharacter.getName()<<endl;
  cout<<SideCharacter.getHealth()<<endl;
  cout<<SideCharacter.getXP()<<endl;
  cout<<endl;
  Player Villain("General Zod");
  cout<<Villain.getName()<<endl;
  cout<<Villain.getHealth()<<endl;
  cout<<Villain.getXP()<<endl;
  cout<<endl;
  Player Hero("Arjun",80,150);
  cout<<Hero.getName()<<endl;
  cout<<Hero.getHealth()<<endl;
  cout<<Hero.getXP()<<endl;
  return 0;
}