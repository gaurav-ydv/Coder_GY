#include<stdio.h>
int main()
{
 int a,b,c,gcd;
 printf("enter the numbers:");
 scanf("%d %d",&a,&b);
 for( int i=1;i<=a&&i<=b;i++)
 {
     if(a%i==0&&b%i==0)
        gcd=i;
 }
 printf("the gcd of %d and %d is:%d",a,b,gcd );
 return 0;
 }
