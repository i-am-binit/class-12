#include<iostream>
#include<stdlib.h>
using namespace std;
void amount(float princ,int time,float rate){
	cout<<"\nPrincipal Amount : Rs."<<princ;
	cout<<"\tTime:"<<time<<"yeras";
	cout<<"\tRate:"<<rate;
	cout<<"\nInterest Amount:"<<(princ*rate*time)<<"\n";
}
void amount(float princ,int time){
	cout<<"\nPrincipal Amount : Rs."<<princ;
	cout<<"\tTime:"<<time<<"yeras";
	cout<<"\tRate:0.08";
	cout<<"\nInterest Amount:"<<(princ*0.08f*time)<<"\n";
}
void amount(float princ,float rate){
	cout<<"\nPrincipal Amount : Rs."<<princ;
	cout<<"\tTime: 2 yeras";
	cout<<"\tRate:"<<rate;
	cout<<"\nInterest Amount:"<<(princ*rate*2)<<"\n";
}
void amount(int time,float rate){
	cout<<"\nPrincipal Amount : Rs. 2000";
	cout<<"\tTime:"<<time<<"yeras";
	cout<<"\tRate:"<<rate;
	cout<<"\nInterest Amount:"<<(2000*rate*time)<<"\n";
}
void amount(float princ){
	cout<<"\nPrincipal Amount : Rs."<<princ;
	cout<<"\tTime: 2 yeras";
	cout<<"\tRate: 0.08";
	cout<<"\nInterest Amount:"<<(princ*0.08*2)<<"\n";
}
int main(){
	system("cls");
	cout<<"Case 1";
	   amount(2000.0f);
	cout<<"Case 2";
	   amount(2500.0f,3);
	cout<<"Case 3";
	   amount(2300.0f,3,0.11f);
	cout<<"Case 4";
	   amount(2000.0f,0.12f);
	cout<<"Case 5";
	   amount(6,0.07f);
	return 0;
}

