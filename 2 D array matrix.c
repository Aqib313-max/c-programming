#include<stdio.h>
int main()
{   int p,q;
	int arr[100][100],i,j;                        //why   [p]!=[100] and  also  [q]!=[100]
	printf("enter the size of an array");
	scanf("%d%d",&p,&q);
	
	printf("enter the elements of an array");
	for(i=0;i<=p-1;i++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	
	printf("the matrix is\n");
	for(i=0;i<=p-1;i++)
	{
		for(j=0;j<=q-1;j++)
		{
			printf("%d ",arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
