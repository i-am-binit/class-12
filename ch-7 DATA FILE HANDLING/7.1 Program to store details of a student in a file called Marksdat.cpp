#include<iostream>
#include<fstream>
using namespace std;
int main(){
	ofstream filout;
	filout.open("marks.txt",ios::out);
	char ans ='y';
	int rollno;float marks;
	while(ans=='y'||ans=='Y'){
		cout<<"\nEnter Rollno. :";
		cin>>rollno;
		cout<<"\nEnter Marks :";
		cin>>marks;
		filout<<rollno<<"\n"<<marks<<"\n";
		cout<<"\nWnat to enter more records?(y/n)...";
		cin>>ans;
	}
	filout.close();
	return 0;
}

