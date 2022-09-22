#include<stdio.h>
int main()
{
	int *p,r ,*q,a,b,temp;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	
	p=&a;
	q=&b;
	
	temp=*p;
	*p=*q;
	*q=temp;
	
	printf("after swaping of two numbers is x= %d & y= %d",*p,*q);
	return 0;
}
