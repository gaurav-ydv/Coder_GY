#include<stdio.h>
int main()
{
int i,j,a[8],key;
printf("enter the values ");
for(i=0;i<8;i++)
scanf("%d",&a[i]);
for(i=1;i<8;i++)
{key=a[i];
{for(j=i-1;j>=0&&a[j]>key;j--)
a[j+1]=a[j];
}
a[j+1]=key;
}
for(i=0;i<8;i++)
printf(" \n %d",a[i]);
return 0;
}
