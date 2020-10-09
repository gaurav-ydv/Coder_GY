#include<stdio.h>
int main()
{
int i,a[6];
for(i=0;i<6;i++)
{scanf("%d",&a[i]);}
for(i=0;i<6;i++)
    if(a[i]%2==0)
printf("there is an even number with index %d \n",i);




return 0;
}
