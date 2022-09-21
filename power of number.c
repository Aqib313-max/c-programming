// c.programme of power of a number
#include<stdio.h>
int main()
{
	int x,y,p=1,i;
	printf("enter a number");
	scanf("%d",&x);
	printf("enter power of a number");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		p=p*x;
	}
	printf("%d",p);
}
