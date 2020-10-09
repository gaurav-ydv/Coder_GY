#include<stdio.h>
int power(int x,int y)
{ if(y!=0)
    return x*power(x,y-1);
    return 1;
}
int main()
{
    int a,b;
    printf("enter the numbers:");
    scanf("%d %d",&a,&b);
    printf("%d raised to the power %d is equal to:%d",a,b,power(a,b));
    return 0;
}
