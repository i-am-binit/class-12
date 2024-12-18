#include<iostream>
#include<stdlib.h>;
using namespace std;
int main(){
	system("cls");
	int A[3][3],B[3][3],i,j;
	cout<<"\n Enter the element of a matrix:\n";
	for(i=0;i<3;++i){
		for(j=0;j<3;++j)
		cin>>A[i][j];
	}
	cout<<"\n Given matrix is:\n";
		for(i=0;i<3;++i){
			cout<<endl;
		for(j=0;j<3;++j)
		cout<<A[i][j]<<" ";
	}
	cout<<"\nTranspose of a given matrix is:";
		for(i=0;i<3;++i){
			cout<<"\n";
		for(j=0;j<3;++j){
			B[i][j]=A[j][i];
			cout<<B[i][j]<<" ";
		}
	}
	return 0;
	
}
