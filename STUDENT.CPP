#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
struct student
{
	int roll_no;
	float attendance;
	char name[20];
	student* next;
};
class data
{
	student* head;
	student* tail;
public:
	data()
	{
		head=NULL;
		tail=NULL;
	}

	void create()
		{
			float x;
			int roll;
			char n[20];
			student* current;
			student* previous;
			char choice;

			do
			{
				printf("\nEnter the data:");
				printf("\nEnter the roll_no:\t");
				scanf("%d",&roll);
				printf("\nEnter the attendance (in percentage(0-100)):\t");
				scanf("%f",&x);
				printf("\nEnter the name:\t");
				scanf("%s",n);
				current=new student;

				current->roll_no=roll;
				strcpy(current->name,n);
				current->attendance=x;
				current->next=NULL;

				if(head==NULL)
				{
					head=current;
					previous=current;
				}

				else
				{
					previous->next=current;
					previous=current;
				}

	//			printf("Add more?(y/n)");
	//			scanf("%c",&choice);
    				cout<<"Add more?(y/n)"<<endl;
		            cin>>choice;

			}while(choice=='Y'||choice=='y');
			tail=current;
		}
	void display()
		{
			student* temp;
			temp=head;

			while(temp!=NULL)
			{
				printf("%02d\t\t",temp->roll_no);
				printf("%s\t",temp->name);
				printf("%.02f\t",temp->attendance);
				printf("\n");
				temp= temp -> next;
			}
		}

	/*int search_rollno()
		{
			student* temp;//start from head position
			temp=head;
			int count=0;
			int t;
			printf("\nEnter the roll_no to be found out");//element to be searched
			scanf("%d",&t);

			while(temp!=NULL)
			{
				count++;
				if(temp->roll_no==t)//if element is found
				{
					printf("Element position : %d\n",count);
					printf("%02d\t\t",temp->roll_no);
					printf("%s\t",temp->name);
					printf("%.02f\t",temp->attendance);
					printf("\n");
					return 1;
					break;
				}

				else
				{
					temp=temp->next;
				}
			}

		}

		int search_name()
		{
			student* temp;//start from head position
			temp=head;
			int count=0;
			char n[20];
			printf("\nEnter the name to be found out\n");//element to be searched
			scanf("%s",n);

			while(temp!=NULL)
			{
				count++;
				if(!strcmp(temp->name,n))//if element is found
				{
					printf("Element position : %d\n",count);
					printf("%02d\t\t",temp->roll_no);
					printf("%s\t",temp->name);
					printf("%.02f\t",temp->attendance);
					printf("\n");
					return 1;
					break;
				}

				else
				{
					temp=temp->next;
				}
			}

		}
		int update()
		{
			student* temp;//start from head position
			temp=head;
			char n[20];
			float x;
			printf("\nEnter the name whose attendance is to be updated\n");//element to be searched
			scanf("%s",n);

			while(temp!=NULL)
			{

				if(!strcmp(temp->name,n))//if element is found
				{
					printf("\nEnter the updated attendance of %s (in percentage(0-100)):\t",temp->name);
					scanf("%f",&x);
					temp->attendance=x;
					printf("\n");
					return 1;
					break;
				}

				else
				{
					temp=temp->next;
				}
			}
		}
*/
	void insert()
	{
		float x;
		int roll;
		char n[20];
		student* current;
		current=new student;
		printf("\nEnter the data for newly inserted student:");
		printf("\nEnter the roll_no:\t");
		scanf("%d",&roll);
		printf("\nEnter the attendance (in percentage(0-100)):\t");
		scanf("%f",&x);
		printf("\nEnter the name:\t");
		scanf("%s",n);
		current->roll_no=roll;
		strcpy(current->name,n);
		current->attendance=x;
		current->next=NULL;
		tail->next=current;
		tail=current;
	}
	void Delete()
		{
			student* temp;//start from head position
			student* current;
			temp=current=head;
			char n[20];
			printf("\nEnter the name whose data is to be deleted\n");//element to be searched
			scanf("%s",n);

			while(temp->next!=NULL)
			{
				if(!strcmp(temp->next->name,n))//if element is found
				{
					current=temp->next;
					temp->next=current->next;
					delete (current);
					break;
				}
				else
				temp=temp->next;
			}
		}


};

int main()
{
	data d;
	printf("\nEnter The elements in the linked list\n");
	d.create();
	printf("\nRoll no.\tName\t Attendance\n");
	d.display();


	/*printf("\nSearch By Roll No.\n");
	d.search_rollno();
	printf("\nSearch By Name\n");
	d.search_name();
	d.update();
	printf("Updated Attendance\n");
	printf("\nRoll no.\tName\t Attendance\n");
	d.display();*/
	d.insert();
	printf("\nRoll no.\tName\t Attendance\n");
	d.display();
	d.Delete();
	printf("\nRoll no.\tName\t Attendance\n");
	d.display();

	return 0;
}