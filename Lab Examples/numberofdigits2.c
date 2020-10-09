#include<stdio.h>
void main()
{
    int i,n,sum=0;;
    printf("enter the number:\n");
    scanf("%d",&n);
    for(i=1;(n/i)!=0;i*=10)
  {sum=sum+1;}
    printf("there are %d digits in this number.",sum);
    }

