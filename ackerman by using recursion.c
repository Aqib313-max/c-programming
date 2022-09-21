//c-prog. for practice session
#include<stdio.h>
int ack(n,m);
int main() 
{   int  m,n,a;
	printf ("enter any value of m & n");
	scanf("%d%d",&m,&n);
    a=	ack(m,n);
    printf ("the ans is  =%d",ack(m,n));
	return 0;
}
int ack(m,n)
{
	if(m==0)
	return n+1;
	else if(m>0 && n==0)
	return ack(m-1,1);
	else if(m>0 && n>0)
	return ack(m-1,ack(m,n-1));
}
