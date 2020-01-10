#include<iostream.h>
#include<conio.h>
void main()
{
int days;
cout<<"Enter number of days";
cin>>days;
int year = 0;
int month = 0;
while(days>=365)
{
days-=365;
year++;
}
while(days>=30)
{
days-=30;
month++;
}
cout<<endl<<"It is "<<year<<" years, "<<month<<" months, "<<"and "<<days<<" days.";
getch();
}

