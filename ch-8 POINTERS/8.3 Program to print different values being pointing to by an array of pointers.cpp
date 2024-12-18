#include<iostream>
using namespace std;
int main()
{ int*ip[5];
int f=65,s=67,t=69,fo=70,fi=75;
ip[0]=&f;
ip[3]=&fo;
ip[1]=&s;
ip[4]=&fi;
ip[2]=&t;
 for(int i=0;i<5;i++)
   cout<<"The pointer ip["<<i<<"]points to"<<*ip[i]<<"\n";
   cout<<"The base adress of array ip of pointers is"<<ip<<"\n";
   for(int i=0;i<5;i++)
     cout<<"The adress stored in ip["<<i<<"]is"<<ip[i]<<"\n";
     return 0;
}
