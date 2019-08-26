#include<iostream.h>
#include<string.h>
#include<conio.h>
#define max 50
int main()
{
	clrscr();
	char name[max];
	cout<<"Enter the string:\n";
	cin.getline(name,max,'+');
	cout<<"The entered string is:\n"<<name<<endl;
       //	cout<<"1st character is:"<<name[1];
	if(name[0]>='a'&& name[0]<='z')
		name[0]-=32;
	int i=1;
	while(name[i]!='\0')
	{       char temp=name[i-1];
		if(temp==' ')
			name[i]-=32;
		i++;
	}
	cout<<"Improvised string is:\n"<<name;
	getch();
	return 0;
	}