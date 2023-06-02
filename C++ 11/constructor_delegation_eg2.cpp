// Constructor Delegation
#include<iostream>
using namespace std;

class Player
{
private:
  string name;
  int health;
  double xp;
public:
  Player();
  Player(string n);
  Player(string name,int health,double xp);
};

Player::Player()
:Player("Frank",100,150)
{
  cout<<"No-args constructor"<<endl;
}

Player::Player(string n)
:Player(n,100,0)
{
  cout<<"One-arg constructor"<<endl;
}

Player::Player(string n,int h,double x)
:name{n},health{h},xp{x}
{
  cout<<"Three-args constructor"<<endl;
}
  
int main()
{
  Player SideCharacter;
  cout<<endl;
  Player Villain("General Zod");
  cout<<endl;
  Player Hero("Arjun",100,0);
  return 0;
}