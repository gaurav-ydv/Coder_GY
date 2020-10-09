#include<stdio.h>
int fib(int n)
{
    if(n<=2)
        return 1;
    int x=fib(n-1);
    int y=fib(n-2);
    int z=x+y;
    return z;
}
int main()
{
    int n,z;
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        z=fib(i);
        printf("%d,",z);
    }
//took 528 seconds
}
