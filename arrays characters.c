#include<stdio.h>
int main()
{
	float y[4]={1,21,313,2131};            //why we can't use 313.
	int i;
	for(i=0;i<=2;i++)
	{
	printf("%f ",y[i]);             // f0r characters we use ....%c..... instead of %d?
    }
	return 0;
}
