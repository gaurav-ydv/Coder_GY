//Program for insertion sorting
#include<stdio.h>
int main()
{
int i,j,a[9],key;
printf("enter the values");
for(i=0;i<9;i++)
scanf("%d",&a[i]);
for(i=1;i<9;i++)
{
key=a[i];
j=i-1;
while(j>=0&&a[j]>key)
{
    a[j+1]=a[j];
    j=j-1;
}
a[j+1]=key;}
for(i=0;i<9;i++)
 printf("\n %d",a[i]);

return 0;
    }
