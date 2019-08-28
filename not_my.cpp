#include<iostream>
#include<iomanip>
#include<string.h>
using namespace std;
class student
{
public:
int roll_no;
char name[20],dob[20],bloodgrp[5],telephone[10];
static int count;

static void counter()
{
cout<<"\n counter working";
cout<<"\n no. of objects created are"<<count;
}

void getdata();
friend void display(student & obj);
void display();

//constructor
student()
{
roll_no=count;
count++;
cout<<"constructor is executed";
}

//destructor
~student()
{
//cout<<"\n destructor";
}

//parameterised constructor

student(int roll_no)
{
count++;
this->roll_no=roll_no;
cout<<"\n parameterised constructor";
}

//copy constructor
student(student & s)
{
count++;
cout<<"\n copy constructor";
roll_no=s.roll_no;
strcpy(name,s.name);
strcpy(dob,s.dob);
strcpy(telephone,s.telephone);
strcpy(bloodgrp,s.bloodgrp);
}
};

int student::count=1;
void student::getdata()
{
cout<<"\n"<<"Name:";
cin>>name;
cout<<"date of bith:";
cin>>dob;
cout<<"telephone:";
cin>>telephone;
cout<<"blood group:";
cin>>bloodgrp;
}
void display(student & obj)
{
cout<<"\n"<<setw(10)<<obj.roll_no;
cout<<setw(20)<<obj.name;
cout<<setw(20)<<obj.dob;
cout<<setw(20)<<obj.telephone;
cout<<setw(15)<<obj.bloodgrp;
}
void student::display()
{
cout<<"\n"<<setw(10)<<roll_no;
cout<<setw(20)<<name;
cout<<setw(20)<<dob;
cout<<setw(20)<<telephone;
cout<<setw(15)<<bloodgrp;
}

int main()
{
student s1,s2;
cout<<"\n enter the data of student 1";
s1.getdata();
cout<<"enter the data of student 2";
s2.getdata();

student s3;
cout<<"\n enter data of student 3";
s3.getdata();

student s4(s3);
cout<<"\n"<<setw(10)<<"roll_no"<<setw(20)<<"name"<<setw(20)<<"daote of birth"<<setw(20)<<"telephone"<<setw(15)<<"blood group";

display(s1);
display(s2);
display(s3);
cout<<"\n For copy constructor s3 to s4";
display(s4);
//creating array of pointers os student object
student *s[50];
int n,i;
cout<<"\n enter the no. of students";
cin>>n;
for(i=0;i<n;i++)
{
s[i]=new student();
s[i]->getdata();
}

cout<<"\n"<<setw(10)<<"roll_no"<<setw(20)<<"name"<<setw(20)<<"date of birth"<<setw(20)<<"telephone"<<setw(15)<<"blood goup";
for(i=0;i<n;i++)
{
s[i]->display();
}
student::counter();
for(i=0;i<n;i++)
{
delete (s[i]);
}
return 0;
}

