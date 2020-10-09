//Program to reverse a string
#include<stdio.h>
#include<string.h>
void main()
{
    int i,n;
    char a[]={"GAURAV"},b[100];
    n=strlen(a);
    for(i=0;n>=0;n--)
    {
b[n-1]=a[i];
i++;
    }
    printf("%s",b);

}

