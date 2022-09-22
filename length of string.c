#include<stdio.h>
int main()
{
	char s[15];
	int l=0;
	int i=0;
	//p=&a[0];
	printf("enter string elements:");
	gets(s);
	puts(s);
	while(s[i]!='\0')
	{
		i++;
		l++;
	}
	printf("length of string=%d:",l);
}
