#include<stdio.h>
void main()
{   int i=0;
    char a[100];
    printf("enter the string:\n");
    scanf("%s",a);
    while(a[i]!='\0')
    { if(a[i]>='A'&&a[i]<='Z')
        {a[i]=a[i]+32;
        i++}
       else{
        if(a[i]>='a'&&a[i]<='z')
            a[i]=a[i]-32;
        i++;
       }}
       printf("Output:%s",a);}

