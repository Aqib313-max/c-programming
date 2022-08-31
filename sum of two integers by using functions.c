//sum of two integers by using functions.
#include<stdio.h>
int add(int a,int b);                                //decleratin before main or function prototype.
int main()
{
	int a,b,c,sum;
	printf("enter the two integers");
	scanf("%d%d",&a,&b);
	sum= add(a,b);                                   //for return function.
	printf("the sum of two integers is %d",sum);
	
}
int add(int a,int b)                                //  function definition.

{
	int c;
	c=a+b;
	return c;
}
