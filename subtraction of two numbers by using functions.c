// subtraction of two numbes by using functions.c

#include<stdio.h>
int  sub(int a,int b);
int main ()
{  int a,b,c;
     printf("enter the two integers");
     scanf("%d%d",&a,&b);
     
//	a=72;
//	b=99;
	c= sub(a,b);                                        //for return function.
	printf("the subtraction of a & b is %d",c);
}
int sub(int a,int b)
{
		
	int  c;
	c=a-b;
	return c;
}
