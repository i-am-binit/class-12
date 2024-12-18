#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main(){
	system("cls");
	ifstream filin1,filin2;
	filin1.open("Stunames.txt",ios::in);
	filin2.open("Stumarks.txt",ios::in);
	char line[80];
	cout<<"THe contents of Stunames and Stumarks are given below.\n";
	filin1.getline(line,80);
	cout<<line<<"\n";
	filin2.getline(line,80);
	cout<<line<<"\n";
	filin1.getline(line,80);
	cout<<line<<"\n";
	filin2.getline(line,80);
	cout<<line<<"\n";
	filin1.getline(line,80);
	cout<<line<<"\n";
	filin2.getline(line,80);
	cout<<line<<"\n";
	filin1.close();
	filin2.close();
	return 0;
}
