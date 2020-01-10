#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
char ch;
float x,y;
cout<<"Enter the two numbers";
cin>>x;
cin>>y;
cout<<"Enter the operation to be performed";
cin>>ch;
clrscr();
switch(ch)
{
case'+':
cout<<(x+y);
break;
case'-':cout<<(x-y);
break;
case'*':cout<<(x*y);
break;
case'/':cout<<(x/y);
break;
}
getch();
}
