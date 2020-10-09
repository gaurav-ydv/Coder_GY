//Program to copy a string in place of other
#include<stdio.h>
void main()
{ int i;
    char a[10]={"GAURAV"},b[10]={"Yadav"};
    for(i=0;b[i]!='\0';i++)
    {
        a[i]=b[i];

    }
    a[i]='\0';

        printf("%s",a);













}

