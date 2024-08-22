#include<iostream>
#include<stdlib.h>
#include<math.h>
using namespace std;
float area(float a,float b,float c){
	float s,ar;
	s = (a+b+c)/2;
	ar = sqrt(s*(s-a)*(s-b)*(s-c));
	return ar;
}
float area(float a,float b){
	return a*b;
}
float area(float a){
	return a*a;
}
int main(){
	system("cls");
	int choice,s1,s2,s3,ar;
	do{
		cout<<"\nArea Main Menu \n";
		cout<<"1.Triangle \n";
		cout<<"2.Square \n";
		cout<<"3.Rectangle \n";
		cout<<"Exit\n";
		cout<<"Enter your chhoice(1-4):";
		cin>>choice;
		cout<<"\n";
		switch(choice){
			case 1: cout<<"Enter 3 sides\n";
					cin>>s1>>s2>>s3;
					ar=area(s1,s2,s3);
					cout<<"The area is:"<<ar<<"\n";
					break;
			case 2: cout<<"Enter a side\n";
			        cin>>s1;
			        ar=area(s1);
			        cout<<"The area is:"<<ar<<"\n";
			        break;
			case 3: cout<<"Enter length and breath\n";
			        cin>>s1>>s2;
			        ar=area(s1,s2);
			        cout<<"The area is:"<<ar<<"\n";
			        break;
			case 4: break;
			deafault : cout<<"Wrong choice!!!!\n";
		};
	}while(choice>0&&choice<4);
	return 0;
}
