#include<stdio.h>
int main()
{
	int a[5],i,max=0;
	printf("enter arry elements");
	
	for(i=0;i<=4;i++)
	
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
    printf("max. in  arry elements is  ");
		for(i=0;i<=4;i++)
	
	{
		if(a[i]>max)
		max=a[i];
		
	}
	printf("%d",max);
	return 0;
}
	
		
