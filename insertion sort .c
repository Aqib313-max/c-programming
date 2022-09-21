//insertion sort .c
#include<stdio.h>
int main ()
{
	int i,j,n,temp;
	int array[7]={7,2,6,5,3,4,1};
	 n=7;
	
	for(i=1;i<n;i++)
	{
		temp=array[i];
		j=i-1;
		while((temp<array[j])&& (j>=0))
		{
			array[j+1]=array[j];
			j=j-1;
			
		}
		array[j+1]=temp;
	}
	printf("the sorted array :\n");
	for(i=0;i<n;i++)
	   printf("%d",array[i]);
	return 0;
}
