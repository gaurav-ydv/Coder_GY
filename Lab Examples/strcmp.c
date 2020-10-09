//Program for string comparison
#include<stdio.h>
int stcmp();
int stcmp(char s[],char t[])
{
int i;
for(i=0;s[i]==t[i];i++)
{
if(s[i]=='\0')
return 0;
printf("%c",s[i]);
}
return s[i];
}
void main()
{
char s[]={"VARUAG"};
char t[]={"GAURAV"};
int z;
z=stcmp(s,t);
printf("Value of z: %d",z);
if(z==0)
printf("\nYES");
else
printf("\nNO");
}

