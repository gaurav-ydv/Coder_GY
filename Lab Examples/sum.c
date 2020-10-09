#include<stdio.h>
void main()
{
    int n,sum=0;
    printf("enter the number:");
    scanf("%d",&n);
    for(int i=1;i<n;i*=10)
    {
        if(n!=0)
        sum=sum +n%(10*i);

    }
    printf("%d",sum);





}

