//Program for deleting a element of an array
#include<stdio.h>
int main()
{
    int i,n,b;
    printf("enter the size of first array:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position of element you want to delete:");
    scanf("%d",&b);
    for(i=b-1;i<n;i++)
    {
        a[i]=a[i+1];
    }
    printf("new array is:");
    for(i=0;i<n-1;i++)
    printf("%d\n",a[i]);

}
