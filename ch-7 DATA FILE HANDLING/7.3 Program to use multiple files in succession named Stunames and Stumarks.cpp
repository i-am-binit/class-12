#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main(){
	system("cls");
	ofstream filout;
	filout.open("stunames.txt",ios::out);
	filout<<"Binit class 10\n"<<"Binit class 11\n"<<"Binit class 12\n";
	filout.close();
	filout.open("stumarks",ios::out);
	filout<<"81.83\n"<<"84.8\n"<<"93\n";
	filout.close();
	char line[80];
	ifstream filin;
	filin.open("Stunames.txt",ios::in);
	cout<<"The contents of stunames file are given below\n";
	filin.getline(line,80);
	cout<<line<<"\n";
	filin.getline(line,80);
	cout<<line<<"\n";
	filin.getline(line,80);
	cout<<line<<"\n";
	filin.close();
	filin.open("stumarks",ios::in);
	cout<<"\nThe contents of stumarks file are given below\n";
	filin.getline(line,80);
	cout<<line<<"\n";
	filin.getline(line,80);
	cout<<line<<"\n";
	filin.getline(line,80);
	cout<<line<<"\n";
	filin.close();
	return 0;
	}
	

