#include<iostream>
#include<fstream>
#include<stdlib.h>
using namespace std;
int main(){
	char myline[75];
	int lc=0;
	ofstream outfile("out.txt",ios::app);
	ifstream infile("data.txt",ios::in);
	if(!infile){
		cerr<<"Failed to open input file\n";
		exit(1);
	}
	while(1){
		infile.getline(myline,75,'.');
		if(infile.eof()){
			break;
			lc++;
		}
		outfile<<lc<<":"<<myline<<"\n";
	}
	infile.close();
	outfile.close();
	cout<<"Output"<<lc<<" records"<<endl;
	return 0;
}

