#include<iostream>
#include<string.h>
using namespace std;
int main(){
	char *names[]={"Binit","Priyanshu","Juwaraj","Ripunjoy","Jyotirmoy"};
	int len=0;
	len=strlen(names[1]);
	cout<<"\nOriginal string 2 is ";
	cout.write(names[1],len).put('\n');
	cout<<"and string 4 is ";
	cout.write(names[3],len).put('\n');
	char *t;
	t=names[1];
	names[1]=names[3];
	names[3]=t;
	len=strlen(names[1]);
	cout<<"Exchanges string 2 is ";
	cout.write(names[1],len).put('\n');
	cout<<" and string 4 is ";
	cout.write(names[3],len).put('\n');
	return 0;
}
