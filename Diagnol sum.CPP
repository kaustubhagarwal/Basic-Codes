#include<iostream>
#include<conio>
#include<math>
void main()
{
int a[50][50];
int n;
cout<<"Enter the number of rows and columns";
cin>>n;
cout<<"Enter the array elements";
for(int i=0;i<n;i++)
{
for(int j=0;j<n;j++)
cin>>a[i][j];
}
int s=0;
for(int i=0;i<n;i++)
s=s+a[i][i];
cout<<"Sum="<<s;
getch();
}
