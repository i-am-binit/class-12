#include<iostream>
#include<process.h>;
using namespace std;
int main(){
	int a[10][10],b[10][10],c[10][10];
	int i,j,m,n,p,q;
	cout<<"\nInput row & column of matrix-A\n";
	cin>>m>>n;
	cout<<"\nInput row & column of matrix-B\n";
	cin>>p>>q;
	if((m==p)&&(n==q)){
		cout<<"Matrices can be added\n";
	}
	else{
		cout<<"MAtrices cannot be added\n";
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
		c[i][j]=a[i][j]+b[i][j];
		}
	}
	cout<<"\nThe sum of two matrices is:\n";
	for(i=0;i<p;++i){
		for(j=0;j<q;++j){
			cout<<c[i][j];
			cout<<" ";
		}
		cout<<"\n";
	}
	return 0;
}
