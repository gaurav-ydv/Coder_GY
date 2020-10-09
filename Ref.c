#include<stdio.h>
int swap(int *a, int *b)
{
    int t=*a;
    *a=*b;
    *b=t;
    printf("a=%d || b=%d",*a,*b);

}
int main()
{ int x=9;
int y=69;

swap(&x,&y);
printf("\n");
printf("Actual Values:");

printf("x=%d|y=%d",x,y);
}
