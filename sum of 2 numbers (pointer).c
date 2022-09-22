#include<stdio.h>
int main()
{
	int *p,r ,*q,a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	
	p=&a;
	q=&b;
	r = *p - *q;
	printf("sum of two numbers is %d",r);
	return 0;
}
