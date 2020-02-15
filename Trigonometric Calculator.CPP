#include<iostream>
#include<math>
#include<conio>
void main()
{
int choice;
float number;
float ans;
cout<<"1.sin"<<endl<<"2.cos"<<endl<<"3.tan"<<endl<<"4.cosec"<<endl<<"5.sec"<<endl<<"6.cot"<<endl<<"7.arcsin"<<endl<<"8.arccos"<<endl<<"9.arctan"<<endl<<"10.arccosec"<<endl<<"11.arcsec"<<endl<<"12.arccot"<<endl;
cin>>choice;
clrscr();
while(choice!=0)
{
if(choice==1||choice==2||choice==3||choice==4||choice==5||choice==6)
{
cout<<"Enter the angle";
cin>>number;
number=number*3.1415926/180;
if(choice==1)
{
ans=sin(number);
cout<<"\n"<<"Answer is "<<ans;
}
if(choice==2)
{
ans=cos(number);
cout<<"\n"<<"Answer is "<<ans;
}
if(choice==3)
{
ans=tan(number);
cout<<"\n"<<"Answer is "<<ans;
}
if(choice==4)
{
ans=1/(sin(number));
cout<<"\n"<<"Answer is "<<ans;
}
if(choice==5)
{
ans=1/(cos(number));
cout<<"\n"<<"Answer is "<<ans;
}
if(choice==6)
{
ans=1/(tan(number));
cout<<"\n"<<"Answer is "<<ans;
}
}
if(choice==7||choice==8||choice==9||choice==10||choice==11||choice==12)
{
cout<<"Enter the number value";
cin>>number;
if(choice==7)
{
ans=asin(number);
ans=ans*180/3.1415926;
cout<<endl<<"Answer is "<<ans;
}
if(choice==8)
{
ans=acos(number);
ans=ans*180/3.1415926;
cout<<endl<<"Answer is "<<ans;
}
if(choice==9)
{
ans=atan(number);
ans=ans*180/3.1415926;
cout<<endl<<"Answer is "<<ans;
}
if(choice==10)
{
ans=asin(1/number);
ans=ans*180/3.1415926;
cout<<endl<<"Answer is "<<ans;
}
if(choice==11)
{
ans=acos(1/number);
ans=ans*180/3.1415926;
cout<<endl<<"Answer is "<<ans;
}
if(choice==12)
{
ans=atan(1/number);
ans=ans*180/3.1415926;
cout<<endl<<"Answer is "<<ans;
}
}
getch();
clrscr();
cout<<"1.sin"<<endl<<"2.cos"<<endl<<"3.tan"<<endl<<"4.cosec"<<endl<<"5.sec"<<endl<<"6.cot"<<endl<<"7.arcsin"<<endl<<"8.arccos"<<endl<<"9.arctan"<<endl<<"10.arccosec"<<endl<<"11.arcsec"<<endl<<"12.arccot"<<endl;
cin>>choice;
clrscr();
}
cout<<"See you later!";
getch();
}
