#include<iostream.h>
#include<conio>
void main()
{
int n;
cout<<"Enter the number";
cin>>n;
int r,rev=0;
for(;n!=0;)
{
r=n%10;
rev=(rev*10)+r;
n=n/10;
}
cout<<"Reverse="<<rev;
getch();
}
