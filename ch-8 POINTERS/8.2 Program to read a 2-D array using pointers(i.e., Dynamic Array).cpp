#include<iostream>
using namespace std;
int main()
{
	int *Val, *Rsum, *Csum;
	int MaxR, MaxC, i, j;
	cout<<"En ter dimensions (row col):";
	cin>>MaxR>>MaxC;
	Val=new int[MaxR*MaxC];
	Rsum=new int[MaxR];
	Csum=new int[MaxC];
	for(i=0; i<MaxR; i++)
	{
		cout<<"\n Enter elements of row"<<i+1<<":";
		Rsum[i]=0;
		for(j=0; j<MaxC; ++j)
		{	cin>>Val[i*MaxC+j];
			Rsum[i]+=Val[i*MaxC+j];
			
		}
	}
	for(j=0; j<MaxC; ++j)
	{
		Csum[j]=0;
		for(i=0;i<MaxR; ++i)
		{
			Csum[j]+=Val[i*MaxC+j];
		}
	}
	cout<<"\n\nThe given array along with Rowsum and Colsum is:\n\n";
	for(i=0; i<MaxR; ++i){
		for(j=0;j<MaxC; ++j){
		cout<<Val[i*MaxC+j];
		if(j==(MaxR-1)){
			cout<<"\t";
			cout<<Rsum[i];
			cout<<"\n";
		}
		else
		 cout<<"\t";
		}
		
}
	for( j=0; j<MaxC; ++j)
	{	cout<<Csum[j]<<'\t';
	}
	cout<<endl;
	return 0;
}
