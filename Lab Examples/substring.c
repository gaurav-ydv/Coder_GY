//Program to extract sub string from a string
#include<stdio.h>
void main()
{
int i,b,l;
char a[]={"IIITSonepatHaryana"},c[100];
printf("enter the starting position and length of sub string:");
scanf("%d %d",&b,&l);
printf("Output:");
for(i=b-1;i<b+l-1;i++)
{
printf("%c",a[i]);
}}
