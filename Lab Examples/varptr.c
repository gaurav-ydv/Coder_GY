#include<stdio.h>
void main()
{
    int a=5,*p,**q;
    p=&a;
    q=&p;
    printf("let's print the value of a:%d %d %d\n",a,*p,**q);
    printf("let's print address of a:%d %d %d",&a,p,*q);}
