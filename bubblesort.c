//Program for Bubble Sorting
#include<stdio.h>
void main()
{int i,j,n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n],c;
    printf("enter the values in array:");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
{for(i=1;i<n;i++)
    {for(j=0;j<n-i;j++)
    if(a[j]>a[j+1])
{
    c=a[j];
    a[j]=a[j+1];
    a[j+1]=c;
}}}
printf("Output:");
printf("\n");
for(i=0;i<n;i++)
{printf("%d\n",a[i]);}


//By Gaurav Yadav(11911038|CSE)
}