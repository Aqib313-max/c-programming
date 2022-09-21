#include<stdio.h>
int main()
{
	int i,j,k=1;
	for(i=1;i<=4;++i)
	{
		for(j=1;j<=i;++j)                         // j++ or ++j but programe will run twice and result will be 2 3
		{
			printf("%d",k++);                     //shows initially increament
			
		}
		printf("\n");
	} 
	return 0;
}
