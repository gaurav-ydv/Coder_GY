#include<stdio.h>
int maximum()
{
int i,max,index,marks[5]={1,3,4,8,7};
max=marks[0];
for(i=0;i<5;i++)
{
    if(marks[i]>max)

   {max=marks[i];}
        index=i;
}
return index;
}
void main()
{
int j;
char *names[5]={"gaurav","bt","am","gy","gt"};
j=maximum()-1;
printf("%s",names[j]);




}

