#include<iostream>
void Merge(int[],int,int[],int,int[]);
using namespace std;
int main(){
    int A[50],B[50],C[50],MN=0,M,N;
	cout<<"How many elements do u want to create first array with?(max.50)..";
	cin>>M;
	cout<<"\nEnter First Array\'s element[asending]..\n";
	for(int i=0;i<M;++i)
	   cin>>A[i];
	cout<<"How many elements do u want to create second array with?(max.50)..";
	cin>>N;
	MN=M+N;
	cout<<"\nEnter Second Array\'s element[descending]..\n";
	for(int i=0;i<N;++i)
	   cin>>B[i];
	Merge(A,M,B,N,C);
	cout<<"\n\nThe Merge array is as shown below..\n";
	for(int i=0;i<MN;++i)
	   cout<<C[i]<<" ";
	cout<<"\n";
	return 0;
}
void Merge(int A[],int M,int B[],int N,int C[]){
   int a,b,c;
   for(a=0,b=-1,c=0;a<M && b>=0;)
   {  if(A[a]<=B[b])C[c++]=A[a++];
        else C[c++]=B[b--];
   }
   if(a<M)
       {  while(a<M)
            C[c++]=A[a++];
	   }
	   else
	   {  while(b>=0)
			 C[c++]=B[b--];
	   }
}
