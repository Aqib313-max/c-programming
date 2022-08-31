#include<stdio.h>
int main()
{
	int year;
	printf("enter any year");
	scanf("%d",&year);
	
	if(year%4==0  && year%100!=0  || year %400 ==0)
	
		printf("%d is a leap year\n",year);           //  after ,(u entered in %d) is shown in result.

	else 
	printf("%d is not a leap year\n",year);
	return 0;
}
