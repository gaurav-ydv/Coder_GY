//Program to join two strings
#include<stdio.h>
void main()
{
    int i=0,j=0;
    char a[100]={"Gaurav"},b[100]={"Yadav"};

    while(a[i]!='\0')
    {
        i++;
    }
    while(b[j]!='\0')
   {
        a[i]=b[j];
        i++;
        j++;
    }
    printf("%s",a);

}
