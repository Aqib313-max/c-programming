//distance conversion
#include<stdio.h>
int main()
{
	float n,km,m,ft,inch,cm;
	printf("\nenter the distance in kilometers ");
	scanf("\n%f",&n);
	m=n*1000;
	ft=m*3.28;
	cm=m*100;
	inch=m*39.37;
	printf("\nthe distance in meters %f",m);
	printf("\nthe distance in centimeters %f",cm);
	printf("\nthe distance in feets %f",ft);
	printf("\nthe distance in inchs %f",inch);
    return 0;
}
