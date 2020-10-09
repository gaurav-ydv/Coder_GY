#include<stdio.h>
int main()
{   int a[1000][2];
    long int x,y;
    int i=0;
    while (scanf("%ld %ld",&x,&y) > 0 )
    { a[i][0]=x;
    a[i][1]=y;
    i=i+1;
printf("%d\n",a[i][0] );}

for(int n=0;n<i;n=n+1)
    printf("\n%ld",a[n][0]+a[n][1]);
   
}