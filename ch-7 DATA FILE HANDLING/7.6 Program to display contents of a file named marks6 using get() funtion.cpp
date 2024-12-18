#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main(){
	system("cls");
	char ch;
	ifstream fin;
	fin.open("marks.dat",ios::in);
	if(!fin){
		cout<<"Cannot open file!!\n";
		return 1;
	}
	while(fin){
		fin.get(ch);
		cout<<ch;
	}
	fin.close();
	return 0;
}

