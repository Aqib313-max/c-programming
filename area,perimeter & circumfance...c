//distance conversion
#include<stdio.h>
int main()
{
	float l,b,r,ar,prm,ar_c,crm;
	printf("\nenter the length of rectangle ");
	scanf("\n%f",&l);
	printf("enter the breadth of rectangle");
	scanf("%f",&b);
	printf("\nenter the radius of circle ");
	scanf("%f",&r);
	//area of rectangle
	ar=l*b;
	//perimeter of rectangle
	prm=2*(l+b);
	//area of circle
	ar_c=3.14*r*r;
	//circumfance of circle
	crm=2*3.14*r;
	printf("\nthe area of rectangle =%f",ar);
	printf("\nthe perimeter of rectangle =%f",prm);
	printf("\nthe area of circle =%f",ar_c);
	printf("\nthe circumfancef circle =%f",crm);
    return 0;
}
