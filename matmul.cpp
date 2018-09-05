#include<iostream>
using namespace std;
{
int a[10][10],b[10][10],c[10][10],p,q,m,n,i,j,k,sum=0;
cout<<"enter the number of row=";
cin>>c;
cout<<"enter the number of collumn=";
cin>>d;
cout<<"enter the first element matrix=\n";
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
cin>>a[i][j];
}
}
cout<<"enter the second element matrix=\n";
for(i=0;i<m;i++)
{
for(i=0;i<n;i++)
{
cin>>b[i][j];
}
}
if(q==m)
{
for(i=0;i<p;i++)
{
for(j=0;i<n;i++)
{
for(k=0;k<q;k++)
{
sum=sum+a[i][k]*b[k][j];
sum=0;
}
}
cout<<"product of matrix=\n";
{
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
cout<<c[i][j];
}
cout<<"\n";
}
}
