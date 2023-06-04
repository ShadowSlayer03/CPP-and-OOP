#include<iostream>
#include<vector>
using namespace std;

int main()
{
  vector<int> vector1;
  vector<int> vector2;
  
  vector1.push_back(10);
  vector1.push_back(20);

  cout<<vector1.at(0)<<" "<<vector1.at(1)<<endl;

  cout<<vector1.size()<<endl;

  vector2.push_back(100);
  vector2.push_back(200);

  cout<<vector2.at(0)<<" "<<vector2.at(1)<<endl;

  cout<<vector2.size()<<endl;

  vector<vector<int>> vector_2d;
  int i,j;
  vector_2d.push_back(vector1);
  vector_2d.push_back(vector2);

  cout<<vector_2d.at(0).at(0)<<endl;
  cout<<vector_2d.at(0).at(1)<<endl;
  cout<<vector_2d.at(1).at(0)<<endl;
  cout<<vector_2d.at(1).at(1)<<endl;

  vector1.at(0)=1000;

  cout<<vector_2d.at(0).at(0)<<endl;
  cout<<vector_2d.at(0).at(1)<<endl;
  cout<<vector_2d.at(1).at(0)<<endl;
  cout<<vector_2d.at(1).at(1)<<endl;

  cout<<"Vector1 Elements: "<<endl;
  for(auto v:vector1)
    cout<<v<<endl;
  // for(i=0;i<4;i++)
  //   {
  //     for(j=0;j<7;j++)
  //       {
  //         cout<<v[i][j];
  //       }
  //     cout<<endl;
  //   }
  return 0;
}
