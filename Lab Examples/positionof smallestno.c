//Program for finding position of smallest element of an array
#include<stdio.h>
int main()
{
    int i,n,key,b;
    printf("enter the size of first array:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    key=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<key)
        {
            key=a[i];
            b=i;
        }
    }
    printf("position of the smallest element is:%d",b+1);
}

