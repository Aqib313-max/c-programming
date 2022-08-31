#include<stdio.h>
int main()
{
	int n,x[5]={5,4,1,2,8};
	
	int i,j,temp;
	n=6;
	for(i=0;i<n-1;i++)
	{
	for(j=0;j<n-i-1;j++)
    {
			if(x[j]<x[j+1])
	temp=x[j];
	x[j]=x[j+1];
	x[j+1]=temp;
	printf("");
	}
	printf("\n");
}
	
	
//	swap(x[j],x[j+1]);
	return 0;
}
