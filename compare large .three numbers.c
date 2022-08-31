//c programme for comparin three digit numbers.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter any three digit numbers");
	scanf("%i%i%i",&a,&b,&c);                // %i is used for 3 or 2 digit numbers.
	if(a>b&&a>c)
	printf("a is the greatest = %i",a);
	if(b>a&&b>>c)
	printf("b is the greatest = %i",b);
    else if
	(c>a&&c>b)
	printf("c is the greatest = %i",c);
	return 0;
}
