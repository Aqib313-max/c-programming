#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter any positive integer ");
	scanf("%d",&n);
	for(i=1;i<=n;++i)                                  //i can be -2,4,-60etc
	{
		sum+=i;
	}
	printf("sum=%d",sum);
	return 0;
}
