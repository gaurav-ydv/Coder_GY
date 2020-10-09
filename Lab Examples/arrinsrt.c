#include<stdio.h>
void main()
{
     int i,n,c,d,a[100];
     printf("enter the size of array:");
     scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element which is to be inserted with location:");
    scanf("%d %d",&c,&d);
    for(i=n;i>d-1;i--)
    {
        a[i]=a[i-1];
    }
    a[d-1]=c;
    for(i=0;i<=n;i++)
    {
        printf("\n%d",a[i]);
    }
}
