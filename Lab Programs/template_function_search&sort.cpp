#include<iostream>
using namespace std;

template<typename U>
void sort(U* arr, int size)    //Insertion Sort
{
  int j;
  for(j=1;j<size;j++)
  {
    int i=j-1;
    U temp;
    temp=arr[j];
    while(i>=0 && arr[i]>temp)
    {
      arr[i+1] = arr[i];
      i--;
    }
    arr[i+1] = temp;
  }
}

template<typename U>
int search(U* arr,int size)
{
  U val; int i;
  cout<<"Enter the value to be searched"<<endl;
  cin>>val;
  for(i=0;i<size;i++)
    {
      if(arr[i]==val)
        return i;
    }
  return -1;
}
int main()
{
  int size,i;
  cout<<"Enter the size of the array:"<<endl;
  cin>>size;
  int arr[size];       //Change datatype here
  for(i=0;i<size;i++)
    cin>>arr[i];
   int index =search(arr,size);
   if(index==-1)
  cout<<"The element is not present in the array"<<endl;
  else
  cout<<"The element is present at index "<<index<<endl;
  
  sort(arr,size);
  cout<<"The sorted array is"<<endl;
  for(i=0;i<size;i++)
    cout<<arr[i]<<" ";
  return 0;
}
