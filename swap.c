#include<stdio.h>
void swap(int x,int y)
{
    int g=x;
    x=y;
    y=g;

}
int main()
{
    int a=8,b=9;
    swap(a,b);
    printf("%d \n %d",a,b);

    }
