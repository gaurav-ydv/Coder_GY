#include<stdio.h>
void main()
{int a,b;
scanf("%d%d",&a,&b);
    add(a,b);
}
int add(int x, int y)
{
    int sum;
    sum=x+y;
    printf("%d",sum);
}
