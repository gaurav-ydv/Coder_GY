#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("enter the number:\n");
    scanf("%d",&n);
    for(int i=1;n/i!=0;i*=10)
    {
        sum=sum+(n/i)%10;
    }
    printf("the sum of digits of the number is:%d",sum);
    }
