// students marks percentage
#include<stdio.h>
int main()
{
	int s1,s2,s3,s4,s5,m;
	float p;
	printf("enter the marks of five subjects");
	scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
	m=s1+s2+s3+s4+s5;
	p=m/5;
	
	printf("the total marks are is %d",m);
	printf("\nthe percentage marks are %f",p);
//	printf("the distance in feets %f",ft);
//	printf("the distance in inchs %f",inch);
    return 0;
}
