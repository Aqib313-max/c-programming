// selection sort .c
#include<stdio.h>
int main()
{
	int arr[10]={9,7,5,3,1,21,2,31,4,11};
	int i,j,position,swap;
	int n=10;
	
	for(i=0;i<n-1;i++)
	{
		position =i;
		
		for(j=i+1;j<n;j++)
		{
		
		if(arr[position]>arr[j])
		position =j;
	 //	else 
	 //	position =i;	
    	}
	
    	if(position!=i)
   	   {
		swap=arr[i];
		arr[i]=arr[position];
		arr[position]=swap;
	    }
    }
     for(i=0;i<n;i++)
     printf("%d\t",arr[i]);
   return 0;
}
