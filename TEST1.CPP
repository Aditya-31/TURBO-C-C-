#include <stdio.h>
#include <conio.h>
int factorial(const int& num)
{
	int f=1;
	if(num==0)
	{
		f=1;
	}
	else
	{
		for(int i=1;i<=num;i++)
		{
			f=f*i;
		}
	}
	return f;
}
int combination(const int& x,const int& y)
{
	int z;
	z=factorial(x);
	int temp=factorial(y);
	z/=temp;
	temp=factorial(x-y);
	z/=temp;
	return z;
}
int main()
{
	 clrscr();
	 int n;
	 printf("Enter the no of rows of pascal's triangle");
	 scanf("%d",&n);
	 for(int i=0;i<n;i++)
	 {
		for(int k=0;k<=n-i;k++)
		{
			printf(" ");
		}
		for(int j=0;j<=n;j++)
		{
		    printf("%d", combination(i,j));
		}
		printf("\n");
	 }
	 getch();
	return 0;
}
