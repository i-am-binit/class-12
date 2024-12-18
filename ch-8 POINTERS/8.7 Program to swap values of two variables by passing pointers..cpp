#include<iostream>
using namespace std;
int main()
{  void swap(int *x,int *y);
   int a=7,b=4;
   cout<<"Original Values\n";
   cout<<"a="<<a<<",b="<<b<<"\n";
   swap(&a,&b);
   cout<<"Swapped Values\n";
   cout<<"a="<<a<<",b="<<b<<"\n";
   return 0;
}
void swap(int*x,int*y)
 {  int temp;
    temp=*x;
    *x=*y;
    *y=temp;
 }
