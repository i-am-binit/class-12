#include<iostream>
using namespace std;
void dec_sort(int X[],int s){
	int tmp,ctr=0;
	for(int i=0;i<s;++i){
		for(int j=0;j<(s-1)-i;++j){
			if(X[j]<X[j+1]){
				tmp=X[j];
				X[j]=X[j+1];
				X[j+1]=tmp;
			}
		}

		
	}
	cout<<"\nThe sorted array(in decending order) is:\n";
	for(int i=0;i<s;++i){
		cout<<X[i]<<" ";
	}
	cout<<endl;
}
void asc_sort(int X[],int s){
		int tmp,ctr=0;
	for(int i=0;i<s;++i){
		for(int j=0;j<(s-1)-i;++j){
			if(X[j]>X[j+1]){
				tmp=X[j];
				X[j]=X[j+1];
				X[j+1]=tmp;
			}
		}

		
	}
	cout<<"\nThe sorted array(in ascending order) is:\n";
	for(int i=0;i<s;++i){
		cout<<X[i]<<" ";
	}
	cout<<endl;
}
void merge(int A[],int M,int B[],int N,int C[]){
	int a=0,b=N-1,c=0;
   while(a>=0&&b>=0)
   {  if(A[a]<=B[b])
        C[c++]=A[a++];
        else C[c++]=B[b--];
   }
   if(a<0)
       {  while(b>=0)
            C[c++]=B[b--];
	   }
	   else
	   {  while(a>=0)
			 C[c++]=A[a++];
	   }
}
int main(){
	
	int A[50],B[50],C[50],sA,sB,sC=0;
	cout<<"Enter size of matrix A(less than 50):";
	cin>>sA;
	cout<<"\nEnter element of aray A:";
	for(int i=0;i<sA;++i){
		cin>>A[i];
	}
	cout<<"Enter size of matrix B(less than 50):";
	cin>>sB;
	cout<<"\nEnter element of aray B:";
	for(int i=0;i<sA;++i){
		cin>>B[i];
	}
	system("cls");
	asc_sort(A,sA);
	dec_sort(B,sB);
	sC=sA+sB;
	C[sC];
	merge(A,sA,B,sB,C);
	cout<<"\n\nThe Merged array is shown below...\n";
    for(int i=0;i<sC;i++)
        cout<<C[i]<<" ";
    cout<<endl;
	return 0;
}
