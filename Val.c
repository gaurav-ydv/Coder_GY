#include<stdio.h>
int swap( int a,int b)
{int temp=a;
a=b;
b=temp;
printf("a=%d||b=%d",a,b);

}
void main()
{ int x=18;
int y=23;
swap(x,y);
printf("\n");
printf("Actual Values:");
printf("x=%d|y=%d",x,y);
}
