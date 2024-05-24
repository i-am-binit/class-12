#include<iostream>
using namespace std;
void print(){
	for(int k=1;k<=60;++k){
		cout<<"-";
		cout<<endl;
	}
}
void print(int n){
	for(int k=1;k<=n;++k){
	cout<<"*"<<endl;
}
}
void print(int a,int b){
	for(int k=1;k<=b;++k){
		cout<<a*k<<endl;
	}
}
void print(char t,int n){
for(int k=1;k<=n;++k){
	cout<<t<<endl;
}
}
int main(){
	int u=9,v=4,w=3;
	char c='@';
	print(c,v);
	print(u,w);
	return 0;
}

