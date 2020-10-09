
#include<stdio.h>
int main()
{
int i,m=0,found,n,x;
printf("enter the size of array");
scanf("%d",&x);
printf("enter the number which is to be searched:");
scanf("%d",&n);
int a[x];
for(i=0;i<x;i++)
{scanf("%d",&a[i]);}
for(i=0;i<x;i++)
{
if(a[i]==n)
{found=1;}
else
{found=0;}
m=m+found;}
printf("%d \n",m);
return 0;
}
