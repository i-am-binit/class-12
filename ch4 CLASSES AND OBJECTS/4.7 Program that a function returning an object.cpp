#include<iostream>
using namespace std;
class Distance{int feet,inches;
           public:
           	void getdata(int f,int i){
           		feet=f;
           		inches=i;
			   }
			   void printit(){
			   	cout<<feet<<" feet "<<inches<<" inches"<<"\n";
			   }
			   Distance sum(Distance d2);
};
Distance Distance::sum(Distance d2){
	Distance d3;
	d3.feet=feet+d2.feet+(inches+d2.inches)/12;
	d3.inches=(inches+d2.inches)%12;
	return (d3);
}
int main(){
	Distance L1,L2,total;
	L1.getdata(17,6);
	L2.getdata(13,8);
	total=L1.sum(L2);
	cout<<"Length 1: ";
	L1.printit();
	cout<<"Length 2:";
	L2.printit();
	cout<<"Total length:";
	total.printit();
	return 0;
}
