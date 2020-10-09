#include<stdio.h>
void main()
{
    int n,x;
    printf("enter the number:");
    scanf("%d",&n);
    x=n/100+(n%100)/50+((n%100)%50)/10+(((n%100)%50)%10)/5+((((n%100)%50)%10)%5)/2+(((((n%100)%50)%10)%5)%2);
    printf("the minimum number of notes required are:%d",x);





}
