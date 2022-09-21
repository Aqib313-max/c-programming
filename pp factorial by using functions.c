//factorial of integer by using functions.
#include<stdio.h>
int fac(int n);
int main()
{
	int n,f;
	printf("enter the two integers");
	scanf("%d",&n);
	f= fac(n);                                  // f must use in printf 
	printf("the fac ofinteger is %d",f);
	
}
int fac(int n)
{
	int f=1,i;                                  //f must have value 1 or ....
	for(i=n;i>=1;i--)
	{
	f= f*i;
	}
	return f;
}
