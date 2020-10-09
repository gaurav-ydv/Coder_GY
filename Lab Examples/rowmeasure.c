//let's add some constant to every element of matrix using row measure
#include<stdio.h>
#include<time.h>
void main()
{ int i,j,a[3][3],n;
    clock_t start,end;
    double t;
    start=clock();
    end=clock();
    printf("enter the constant:");
    scanf("%d",&n);
    printf("enter the elements of array:");
    for(i=0;i<3;i++)
    {for(j=0;j<3;j++)
    {scanf("%d",&a[i][j]);}
    }
    for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {a[i][j]=a[i][j]+n;}
    }
    t=(((double)(end-start))/CLOCKS_PER_SEC);
   printf("the time taken during row measure is:%f\n",t);
   for(i=0;i<3;i++)
    {
    for(j=0;j<3;j++)
    {printf("\t%d",a[i][j]);}
    printf("\n");
    }}
