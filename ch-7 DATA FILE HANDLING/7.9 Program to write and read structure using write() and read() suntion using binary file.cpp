#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
using namespace std;
struct Customer{
	    char name[51];
	    float balance;
};
int main(){
	system("cls");
	Customer savac;
	strcpy(savac.name,"Binit kurmi");
	savac.balance=21310.75;
	ofstream fout;
	fout.open("Saving",ios::out|ios::binary);
	if(!fout){
		cout<<"File can not be opened\n";
		return 1;
	}
    fout.write((char*)&savac,sizeof(Customer));
    fout.close();
    ifstream fin;
    fin.open("Saving",ios::in|ios::binay);
    fin.read((char*)&savac,sizeof(Customer));
    cout<<savac.name;
    cout<<" has thr balace amount of RS."<<savac.balance<<endl;
    fin.close();
    return 0;
}

