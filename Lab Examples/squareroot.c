#include<stdio.h>
int main()
{
    float x,n;
    printf("enter the number:");
    scanf("%f",&n);
    for(x=0.01;x*x<n;x=x+0.01);
    printf("the square root is :%f",x);


return 0;
}
