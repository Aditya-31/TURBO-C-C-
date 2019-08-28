/*To display the database of student */

#include<stdio.h>

struct student
	{
	int rollno,marks;
	char name[20];
	}a[10];


void main()
	{
	int n,i;
	printf("Please enter the number of students whose data is to be entered \n");
	scanf("%d",&n);


	for(i=0;i<n;i++)
	{
	printf("enter roll no of student%d\n",i+1);
	scanf("%d",&a[i].rollno);


	printf("enter the name of the student%d\n",i+1);
	scanf("%s",a[i].name);


	printf("enter the marks of the student%d\n",i+1);
	scanf("%d",&a[i].marks);
	}


	printf("\n  rollno.\tname\tmarks");
	for(i=0;i<n;i++)
	printf("\n\t%d\t%s\t%d",a[i].rollno,a[i].name,a[i].marks);
	}
