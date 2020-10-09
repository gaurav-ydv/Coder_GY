#include<stdio.h>
void main()
{
    int i,j,key,a[10],sum=0,m;
    printf("enter the elements:");
    for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    printf("enter the element to be searched");
    scanf("%d",&key);
for(i=0;i<10;i++)
{
if(a[i]==key)
{ m=1;}
else
{m=0;}
sum=sum+m;
}
printf("there are %d such elements in this array",sum);









}
