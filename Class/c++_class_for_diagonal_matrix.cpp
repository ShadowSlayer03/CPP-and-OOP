//C++ class for diagonal matrix
#include<iostream>
using namespace std;

class Diagonal
{
  private:
    int n;
    int* arr;
  public:
    Diagonal(int n) //creates DMA- Constructor
{
  this->n = n;
  arr = new int[n];
}
    void set(int x,int row,int col);
    int get(int row,int col);
    void display();
    ~Diagonal()  // deletes DMA- Destructor
{
  delete []arr;
}
};
void Diagonal::set(int x,int row,int col)
{
  if(row==col)
    arr[row]=x;
}
int Diagonal::get(int row,int col)
{
  if(row==col)
    return arr[row];
  else
    return 0;
}
void Diagonal::display()
{
  int i,j;
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
        {
          if(i==j)
            cout<<arr[i]<<" ";
          else
            cout<<0<<" ";
        }
      cout<<endl;
    }
}
int main()
{
  int size,val;
  cout<<"Enter size of matrix\n";
  cin>>size;
  Diagonal d(size);
   d.set(12,1,1);
  d.set(24,2,2);
   val = d.get(2,3);
  cout<<val<<endl;
  d.display();
  return 0;
}