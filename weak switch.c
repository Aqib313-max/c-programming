#include<stdio.h>
int main()
{
	int i=1;
	printf("%d");
	scanf("%d",&i);
	switch(i)
	{                                                   //must be break to coplete only one case 
	                                                    //if there is no break than the programme will run till the break
	case 1:
		printf("monday");
		break;
	case 2:
		printf("tuesday");
		break;
	case 3:
		printf("wensday");
		break;
	case 4:
		printf("thursday");
		break;
	case 5:
		printf("friday");
		break;
	case 7:
    	printf("sunday");
	break;
	case 6:
	    printf("saturday");
		break;       
	default:
		printf("d0es not exist");
		break;
	}
}
