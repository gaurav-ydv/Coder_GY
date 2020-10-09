#include<stdio.h>
int main()
{
int a=8,b=-2;
int *ip;
ip=&a;
*ip=7;
printf("%d\n%d\n",a,*(ip=&b)=10);
int *c[2];
int name[]={*ip,*ip+2};
*c=name;
printf("%d \n %d",**(c+0),*(*(c)+1));
}
