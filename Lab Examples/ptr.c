#include<stdio.h>
int main()
{
    int x=5;
    int *y=&x;
    printf("value of x: %d \n",x);
    printf("value of x :%d \n ",*y);
    printf("add %u \n",y);
    printf("%d \n",y);
    printf("add of y %d \n",&y);
    return 0;




}
