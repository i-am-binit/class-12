#include<iostream>
using namespace std;
class Time{ 
                short int hh,mm,ss;
			public: 
			    Time()   { hh=mm=ss=0;}
			    void getdata(int i,int j,int k)
			           { hh=i;mm=j;ss=k;}
                void prndata(void)
                { 
                    cout<<"\nTime is "<<hh<<":"<<mm<<":"<<ss<<"\n";
				}
          };
int main()
{ 
  Time T1,*tp;
  cout<<"Initializing data members using the object, with values 12,22,10\n";
  T1.getdata(12,22,10) ;
  cout<<"Printing members using the object";
  T1.prndata();
  tp=&T1;
  cout<<"Printing members using the object"<<"with values 15,10,17\n";
  tp->getdata(15,10,17) ;
  cout<<"Printing members using the object";
  T1.prndata() ;
  cout<<"Printing members using the objects pointer";
  tp->prndata();
  return 0; 
}
