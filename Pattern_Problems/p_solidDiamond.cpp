#include <iostream>
#include<cmath>
using namespace std;
int main()
{
  cout<<"Enter the row size:";
  int row_size,out,in1,in2;
  cin>>row_size;
  for(out=row_size;out>=-row_size;out--)
       {
           for(in1=1;in1<=abs(out);in1++)
           {
               cout<<" ";
           }
           for(in2=row_size;in2>=abs(out);in2--)
           cout<<"* ";
           cout<<"\n";
       }
}