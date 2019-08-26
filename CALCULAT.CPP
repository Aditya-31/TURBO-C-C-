#include<iostream.h>
#include<conio.h>
class number
{
		double n;
	public:
		number()
		{
		    n=0;
		}
		void read()
		{
			cin>>n;
		}
		void show()
		{
			cout<<n;
		}
	       number operator + (const& number n1)
	       {
			number temp;
			temp.n=n+n1.temp;
			return temp;
	       }
	       number operator - (const& number n1)
	       {
			number temp;
			temp.n=n-n1.temp;
			return temp;
	       }
	       number operator * (const& number n1)
	       {
			number temp;
			temp.n=n*n1.temp;
			return temp;
	       }
	       number operator/(const& number n1)
	       {
			number temp;
			if(n1.temp!=0)
			{
				temp.n=n/n1.temp;
				return temp;
			}
			else
			{
				cout<<"DIVISION CAN'T BE PERFORMED";
				return 0;
			}
	       }
};
int main()
{
     /*	char choice, yes;
	do
	{
		number n1,n2,result;
		cout<<""
		cout<<"\nEnter the option"
	}while(yes=='y'||yes=='Y')
	*/
	number n1,n2,result;
	n1.read();
	n2.read();
	result=n1/n2
	return 0;
}