#include<stdio.h>
void main()
{
int x,y,z=15;
for(x=z/2;x<=z;x=x+2)
{
for(y=1;y<z-x;y=y+2)
printf(" ");
for(y=1;y<=x;y++)
printf("*");
for(y=1;y<=z-x;y++)
printf(" ");
for(y=1;y<=x-1;y++)
printf("*");

printf("\n");
}

for(x=z;x>=0;x--)
{
for(y=x;y<z;y++)
printf(" ");
for(y=1;y<=((x*2)-1);y++)
printf("*");
printf("\n");












}
}
