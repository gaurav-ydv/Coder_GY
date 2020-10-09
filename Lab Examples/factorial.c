//Program for finding the factorial a given number
#include<stdio.h>
int fact(int)
int main()
{
    int num,factorial;
printf("enter the number");
scanf("%d",&num);
factorial=fact(num);
printf("%d",factorial);
return 0;
}
int fact( int num)
{
if(num==1)
return 1;
factorial=num*fact(num-1);
}
