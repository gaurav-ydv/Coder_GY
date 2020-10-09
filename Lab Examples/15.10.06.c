#include<stdio.h>
void main()
{
char *str[]={"GAURAV","YADAV","GT"};
printf("%d",sizeof(str));
printf("%c\n",*(*(str+1)+3));
printf("%s",(str[1]+3));
}
