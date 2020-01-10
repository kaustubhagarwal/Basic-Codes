#include<iostream>
#include<conio.h>
void main()
{
int ir;
cout<<"Enter the amount";
cin>>ir;
int x,y,z,e,d,a,b,c;
x=ir/2000;
ir=ir%2000;
y=ir/500;
ir=ir%500;
z=ir/100;
ir=ir%100;
e=ir/50;
ir=ir%50;
d=ir/20;
ir=ir%20;
c=ir/10;
ir=ir%10;
b=ir/5;
ir=ir%5;
a=ir;
clrscr();
cout<<"Number of 2000 rupee notes="<<x<<endl;
cout<<"Number of 500 rupee notes="<<y<<endl;
cout<<"Number of 100 rupee notes="<<z<<endl;
cout<<"Number of 50 rupee notes="<<e<<endl;
cout<<"Number of 20 rupee notes="<<d<<endl;
cout<<"Number of 10 rupee notes="<<c<<endl;
cout<<"Number of 5 rupee coins="<<b<<endl;
cout<<"Number of 1 rupee coins="<<a<<endl;
getch();
}
