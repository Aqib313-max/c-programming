#include<stdio.h>
int main()
{
	int i,n,a[4],flag=0;
	printf("enter the element to search");
	scanf("%d",&n);
	
	printf("enter the elements of an array");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<5;i++)
	{	
		if(a[i]==n)
		{
		   flag=1;
		   printf("the element is found at  %d th ",i+1);
		   break;
	    }
    }
        if(flag==0)
	 {
	    printf("not found");
	}
	 return 0;	
}

