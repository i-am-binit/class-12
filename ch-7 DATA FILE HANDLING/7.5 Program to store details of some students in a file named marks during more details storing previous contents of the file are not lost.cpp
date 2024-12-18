#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main(){
	ofstream fout;
	fout.open("marks.dat",ios::app);
	char ans='y';
	int rollno;
	float marks;
	system("cls");
	while(ans=='y'||ans=='Y'){
		cout<<"\nEnter Rollno:";
		cin>>rollno;
		cout<<"\nEnter marks:";
		cin>>marks;
		fout<<rollno<<'\n'<<marks<<'\n';
		cout<<"\nWant to enter more records?(y/n)...";
		cin>>ans;
	}
	fout.close();
	return 0;
}

