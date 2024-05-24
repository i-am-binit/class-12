#include<iostream>
#include<stdlib.h>
using namespace std;
void amount(float princ,int time,float rate){
	cout<<"\nPrinciple Amount :"<<princ;
	cout<<"\tTime :"<<time<<"years";
	cout<<"\nRate :"<<rate;
	cout<<"\nInterest Amount :"<<(princ*time*rate)<<"\n";
}
void amount(float princ,int time){
   	cout<<"\nPrinciple Amount :"<<princ;
	cout<<"\tTime :"<<time<<"years";
	cout<<"\nRate :0.08";
	cout<<"\nInterest Amount :"<<(princ*time*0.08)<<"\n";	
}
void amount(float princ,float rate){
	cout<<"\nPrinciple Amount :"<<princ;
	cout<<"\tTime :2 years";
	cout<<"\nRate :"<<rate;
	cout<<"\nInterest Amount :"<<(princ*2*rate)<<"\n";
}
void amount(int time,float rate){
	cout<<"\nPrinciple Amount :2000";
	cout<<"\tTime :"<<time<<"years";
	cout<<"\nRate :"<<rate;
	cout<<"\nInterest Amount :"<<(2000*time*rate)<<"\n";
}
void amount(float princ){
	cout<<"\nPrinciple Amount :"<<princ;
	cout<<"\tTime :2 years";
	cout<<"\nRate :0.08";
	cout<<"\nInterest Amount :"<<(princ*2*0.08)<<"\n";
}
int main(){
	
	system("cls");
	cout<<"Case 1";
	 amount(2000.0F);
	cout<<"Case 2";
	 amount(2500.0F,3);
	cout<<"Case 3";
	 amount(2300.0F,3,0.11F);
	cout<<"Case 4";
	 amount(2,0.12F);
	cout<<"Case 5";
	 amount(6,0.07F);
	return 0;
}
