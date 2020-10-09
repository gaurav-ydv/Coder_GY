//Program to copy desired length string in place of other
#include<stdio.h>
void main()
{ int i,n;
printf("enter how many characters you want to copy:");
scanf("%d",&n);
char a[10]={"GAURAV"},b[10]={"Yadav"};
for(i=0;i<n;i++)
{a[i]=b[i];}
printf("%s",a);
}

