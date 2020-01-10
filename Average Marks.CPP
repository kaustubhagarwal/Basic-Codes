#include<iostream>
#include<conio.h>
class student
{
int grno;
char name[100];
float marks[5];
float total;
float avg;
public:
void cal_total();
void cal_avg();
void accept();
void display();
};
void student::cal_total()
{
total=0;
for(int i=0;i<5;i++)
total=total+marks[i];
}
void student::cal_avg()
{
avg=0;
avg=total/5;
}
void student::accept()
{
cout<<"Enter GR number";
cin>>grno;
cout<<"Enter name";
cin>>name;
cout<<"Enter marks";
for(int i=0;i<5;i++)
cin>>marks[i];
}
void student::display()
{
cout<<"GR number="<<grno<<endl;
cout<<"Name="<<name<<endl;
cout<<"Marks=";
for(int i=0;i<5;i++)
cout<<marks[i]<<"\t";
cout<<endl<<"Total="<<total<<endl;
cout<<"Average="<<avg;
}
void main()
{
student s1;
s1.accept();
s1.cal_total();
s1.cal_avg();
s1.display();
getch();
}