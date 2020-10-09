#include<stdio.h>
void main()
{
    int n,a=0,r;
    printf("enter the number:");
    scanf("%d",&n);
    for(;n!=0;n/=10)
    {r=n%10;
        a=a*10+r;
    }
    printf("the reversed number is :%d",a);
}
