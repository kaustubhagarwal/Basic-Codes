#include<iostream>
#include<conio>
void main()
{
cout<<"Program to calculate percentage"<<endl;
float marks[5][4];
char name[][20]={"Physics","Elective 1","Chemistry","Elective 2","English"};
for(int i=0;i<5;i++)
{
cout<<"Enter the marks of "<<name[i]<<endl;
cout<<"Enter marks in PT-1 ";
cin>>marks[i][0];
cout<<"Enter marks in half yearly ";
cin>>marks[i][1];
cout<<"Enter marks in PT-2 ";
cin>>marks[i][2];
cout<<"Enter marks in the final exam ";
cin>>marks[i][3];
}
float perc[5];
for(int i=0;i<5;i++)
{
perc[i]=(marks[i][0]*10/20)+(marks[i][1]*30/100)+(marks[i][2]*10/20)+(marks[i][3]*50/100);
}
float avgper;
for(int i=0;i<5;i++)
{
cout<<endl<<"Percentage in "<<name[i]<<"="<<perc[i];
avgper+=perc[i];
}
avgper=avgper/5;
cout<<endl<<"Average percentage="<<avgper;
getch();
}

