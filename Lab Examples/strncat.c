//Program to replace strncat
#include<stdio.h>
void main()
{
    int i=0,j=0,x;
    char a[100]={"Gaurav"},b[100]={"Yadav"};
    printf("enter how many characters you want to append:");
    scanf("%d",&x);
    while(a[i]!='\0')
    {
        i++;
    }
    while(j<x)
   {
        a[i]=b[j];
        i++;
        j++;
    }
    printf("%s",a);

}

