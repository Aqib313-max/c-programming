//c-prog. to find the facrorial by recursion.
#include<stdio.h>
int fact(n);
int main() 
{   int n,f;
	printf ("enter any number");
	scanf("%d",&n);
    f=	fact(n);
    printf ("the factorial of number n =%d",f);
	return 0;
}
int fact(n)
{
	if(n<=1)
	return 1;
	else
	return n*fact(n-1);
}
