#include<stdio.h>
int main()
{
	int i,j,temp;
	int x[5]={8,5,2,6,7};
	int n=5;
	for(j=0;j<n-1;j++)
	 
	 	for(i=0;i<n;i++)
	 	if(x[i]>x[i+1])
      
	 	{
	 		temp=x[i];
			 x[i]=x[i+1];
			 x[i+1]=temp;
	    }
	 
	 return 0;
}
