//multiple of two numbers by using functions
#include<stdio.h>
int multi(int ,int );
int main()
{
	int a,b,s;
	printf("enter the two integers ");
	scanf("%d%d",&a,&b);
	s=multi(a,b);                                           //here return function must written.
	printf("the multiple of two numbers is %d",s);
	
}
int multi(int a,int b)
{
	int s;
	s=a*b;                                                //here same s
	return s;                                               // here same s
}






















/*#include<stdio.h>
int  sub(int a,int b);
int main ()
{  int a,b,c;
	a=72;
	b=99;
	c= sub(a,b);
	printf("the subtraction of a & b is %d",c);
}
int sub(int a,int b)
{
		
	int  c;
	c=a-b;
	return c;
}*/
