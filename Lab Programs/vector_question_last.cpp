#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>
using namespace std;

int main()
{
  vector<int> v{1,2,3,4,5};
  cout<<v.size()<<endl;   //Size
  cout<<v.empty()<<endl;  //Returns 1 if vector is empty otherwise 0
  v.push_back(6);  //Inserting some elements into the vector
  v.push_back(7);
  v.push_back(8);
  v.push_back(9);
  cout<<v.size()<<endl;  

  v.erase(v.begin()+4);   // Removes the element at index 4
  
  //Using a for loop to print each element at the particular index
  for(int i=0;i<8;i++)
      cout<<v.at(i)<<" ";
  cout<<endl;
  
  auto iter = find(v.begin(),v.end(),7);
  int index = distance(v.begin(), iter);
  cout<<"Index of element 7 in the vector is "<<index<<endl;
  cout<<endl;

  vector<float> vctr(7);
  vctr={12,34,16,190,3,67,2};

  //Using an iterator to print values- Standard Way 
  cout<<"Before sorting:"<<endl;
  vector<float>::iterator i;
  for(i=vctr.begin();i!=vctr.end();++i)
    cout<<*i<<" ";
  cout<<endl;
  
  sort(vctr.begin(),vctr.end(),greater<float>());
  //greater<int>() specifies a custom comparator that compares elements in reverse order

    cout<<"After sorting:"<<endl;
  for(i=vctr.begin();i!=vctr.end();++i)
    cout<<*i<<" ";
  cout<<endl;

  float sum= accumulate(vctr.begin(),vctr.end(),0);
  cout<<"Sum of vector elements = "<<sum<<endl;
  return 0;
}
