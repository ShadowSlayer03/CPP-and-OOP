// Constructor Initialisation list
// This is a better way to create a constructor since here we are not reassigning values rather we create objects with the same value.
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
  Player(string name,int health,double xp);
};

Player::Player()
:name{"Frank"},health{100},xp{150}
{}

Player::Player(string n,int h,double x)
:name{n},health{h},xp{x}
{}
  
int main()
{
  Player SideCharacter;
  Player Hero("Arjun",100,0);
  return 0;
}