//C++ class for lower triangular matrix
#include<iostream>
using namespace std;

class LowerTri
{
  private:
    int n;
    int* arr;
  public:
    LowerTri(int n)
  {
  this->n = n;
  arr = new int[n*(n+1)/2];
  }
    ~LowerTri()
  {
    delete []arr;
  }
  void set(int row, int col, int x);
  int get(int row,int col);
  void display();
};
void LowerTri::set(int row, int col, int x)
{
  if(row>=col)
  {
    arr[row*(row-1)/2+(col-1)] = x;
  }
}
int LowerTri::get(int row, int col)
{
  if(row>=col)
  {
    return arr[row*(row-1)/2+(col-1)];
  }
  else
    return 0;
}
void LowerTri::display()
{
  int i,j;
  for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
        {
          if(i>=j)
          printf("%5d",arr[i*(i-1)/2+(j-1)]);
          else
            printf("%5d",0);
        }
      cout<<endl;
    }
}
int main()
{
  int size,val;
  cout<<"Enter size of matrix\n";
  cin>>size;
  LowerTri lt(size);
   lt.set(1,1,12);
  lt.set(2,2,12);
  lt.set(3,3,12);
  lt.set(4,4,12);
  lt.set(2,1,24);
  lt.set(3,2,24);
  lt.set(4,3,24);
  lt.set(3,1,48);
  lt.set(4,2,48);
  lt.set(4,1,96);

   val = lt.get(3,1);
  cout<<val<<endl;
  lt.display();
  return 0;
}