#include<iostream>
#include<math>
#include<conio.h>
void main()
{
int a,b,c;
float s;
cout<<"Enter the three sides";
cin>>a>>b>>c;
s=(a+b+c)/2;
float area;
area=sqrt(s*(s-a)*(s-b)*(s-c));
cout<<"Area="<<area;
getch();
}

