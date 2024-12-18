#include<iostream>
#include<process.h>;
using namespace std;
int main(){
	int a[10][10],b[10][10],c[10][10];
	int i,j,m,n,p,q,ip;
	cout<<"\nInput row & column of matrix-A\n";
	cin>>m>>n;
	cout<<"\nInput row & column of matrix-B\n";
	cin>>p>>q;
	if(n==p){
		cout<<"Matrices can be multiplied\n";
	}
	else{
		cout<<"MAtrices cannot be multiplied\n";
		exit(0);
	}
	cout<<"\nInput MAtrix-A\n";
	for(i=0;i<m;++i){
		for(j=0;j<n;++j){
			cin>>a[i][j];
			cout<<" ";
		}
		cout<<"\n";
	}
	cout<<"\nInput MAtrix-B\n";
	for(i=0;i<p;++i){
		for(j=0;j<q;++j){
			cin>>b[i][j];
			cout<<" ";
		}
		cout<<"\n";
	}
	for(i=0;i<p;++i){
		for(j=0;j<q;++j){
			c[i][j]=0;
			for(ip=0;ip<n;++ip){
				c[i][j]+=(a[i][ip]*b[ip][j]);
			}
		}
	}
	cout<<"\nThe product of two matrices is:\n";
	for(i=0;i<p;++i){
		for(j=0;j<q;++j){
			cout<<c[i][j];
			cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
