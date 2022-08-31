#include<stdio.h>
int main()
{   
   int x,y,temp;
   printf("enter the value of x and y are ");
   scanf("%d%d",&x,&y);
   temp=x;
   x=y;
   y=temp;
   printf("the value of x and y after swap are x=%d,y=%d",x,y);
	return 0;
}
