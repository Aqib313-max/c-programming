#include<stdio.h>
int main()
{
	int a[5],i,min=0;
	printf("enter arry elements");
	
	for(i=0;i<=4;i++)
	
	{
		scanf("%d",&a[i]);
	}
	min=a[0];
    printf("max. in  arry elements is  ");
		for(i=0;i<=4;i++)
	{
		if(a[i]<min)
		{
		min=a[i];
	    }
	}
	printf("%d",min);
	return 0;
}
	
		
