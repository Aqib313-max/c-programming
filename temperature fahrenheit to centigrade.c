// conversion of temperature farenheit to centigrade
#include<stdio.h>
int main()
{
	float f,c;
	printf("enter the temperature in fahrenheit");
	scanf("%f",&f);
	
	c =(f-32)*5/9;
	
	printf("temperature in  centigrade = %f",c);
    return 0;
}
