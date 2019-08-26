#include<stdio.h>
#include<conio.h>
#define max 50
int main()
{
	clrscr();
	printf("Enter a string\n");
	char str[max];
	scanf("%s",str);
	int count=0;
	while(str[count]!='\0')
		count++;
	printf("\n\n%d is the length of entered string\n",count);
       //	printf("\n\n%s is the entered string",str);
	int end=count-1;
	char *str1= new char[count];
	for(int i=0;i<count;i++)
	{
		str1[end]=str[i];
		end--;
	}
	str1[i]='\0';
      //	printf("\n\n%s is the reveresed string",str1);
	for(int j=0;j<count;)
	{
		if (str[j]!=str1[j])
		{
			printf("String isn't Palindrome");
			break;
		}
		else
			j++;
	}
	if(j==count)
		printf("\nString is paindrome string",str1);
	getch();
	return 0;

}

