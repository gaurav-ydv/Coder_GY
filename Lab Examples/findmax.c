#include<stdio.h>
void main()
{
int i,a[7],max=0;
for(i=0;i<7;i++)
{scanf("%d",&a[i]);}

for(i=0;i<7;i++)

{
if(a[i]>max)
    max=a[i];
}
printf("%d",max);
}
