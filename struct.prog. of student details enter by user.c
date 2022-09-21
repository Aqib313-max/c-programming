//c-prog. of structure to print student details of any class.
#include<stdio.h>
struct stu
{
	int rollno;
	char name[31];  
	float marks;
};
int main()
{   
	struct stu s[31];
	 int i,n;
	 
	printf("enter the no. of students");
	scanf("%d",&n);

	for(i=0;i<n;i++)
	{  
	 printf("enter the rollno  name  marks of student %d \n",i+1);
		scanf("%d %s %f",&s[i].rollno,&s[i].name,&s[i].marks);	
	}
	
	printf("\n");
	for(i=0;i<n;i++)
	{
	printf("%d \t  %s \t  %f \n",s[i].rollno,s[i].name,s[i].marks);
	}
	
}
