#include<stdio.h>
#include<time.h>
#include<math.h>
void toh(int n,char x,char y,char z)
{
if(n==1)
    {printf("Move from %c to %c \n",x,y);}
else
  {toh(n-1,x,z,y);
  toh(1,x,y,z);
toh(n-1,z,y,x);
}}
void main()
{
    clock_t start,end;
    double t;
    start=clock();
    end=clock();
    t=(((double)(end-start))/CLOCKS_PER_SEC);
    int n,p;
    printf("enter the number of disks: \n");
    scanf("%d",&n);
    p=pow(2,n);
    toh(n,'x','y','z');
    printf("time taken by program is: %f \n",t);
    printf("the number of steps taken are:%d \n",p-1);}
