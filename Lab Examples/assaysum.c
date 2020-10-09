#include<stdio.h>
void main()
{
int i,sum=0,a[3];
float avg;
for(i=0;i<=2;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
    avg=sum/3;
    printf("%f",avg);
}
