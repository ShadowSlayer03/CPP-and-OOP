// Substitution  Cipher
#include <iostream>
#include<string>
using namespace std;

int main() 
{
  string normalText = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789@#%&* ";
  string key = "XKSDTUYRHVNMOPGWQJACBIEFLZxksdtuyrhvnmopgwqjacbieflz@#%7 42956380&*1";
  string message,encrypted,decrypted;
  cout<<"Enter a secret message: "<<endl;
  getline(cin,message);
  int i,j;
  for(i=0;i<message.length();i++)
    {
      int index= normalText.find(message.at(i));
      encrypted += key[index];
    }
  cout<<"Required encrypted text is: "<<endl;
  cout<<encrypted<<endl;

  for(i=0;i<encrypted.length();i++)
    {
      int index= key.find(encrypted.at(i));
      decrypted += normalText[index];
    }
  cout<<"Required decrypted text is: "<<endl;
  cout<<decrypted<<endl;
  
  return 0;
}
