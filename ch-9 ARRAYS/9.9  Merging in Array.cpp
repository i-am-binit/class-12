#include<iostream>
using namespace std;
void Merge(int[],int,int[],int,int[]);
int main()
{  
    int A[50],B[50],C[50],MN=0,M,N;
    cout<<" How many element do U want to create first array with?(max.50)...";
    cin>>M;
    cout<<"\nEnter First Array\'s elements [ascending]...\n";
    for(int i=0;i<M;i++)
        cin>>A[i];
    cout<<"\nHow many element do U want to create second array with?(max.50)...";
    cin>>N;
    MN=M+N;
    cout<<"\nEnter second Array\'s elements[descending]...\n";
    for(int i=0;i<N;i++)
       cin>>B[i];
    Merge(A,M,B,N,C);
    cout<<"\n\nThe Merged array is shown below...\n";
    for(int i=0;i<MN;i++)
        cout<<C[i]<<" ";
    cout<<endl;
    return 0;
}
void Merge(int A[],int M,int B[],int N,int C[])
{  int a,b,c;
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
