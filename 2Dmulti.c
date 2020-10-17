#include<stdio.h>
void main()
{ int size[4];
printf("Enter the sizes of the arrays.In row,column form:\n");
scanf("%d %d %d %d",&size[0],&size[1],&size[2],&size[3]);
if(size[1]==size[2])
{
int a[size[0]][size[1]];
int b[size[2]][size[3]];
printf("Enter the elements of the first array:\n");
for (int i=0;i<size[0];i++){
for(int j=0;j<size[1];j++)
{
  scanf("%d",&a[i][j]);
}
}
printf("Enter the elements of the second array:\n");
for (int i=0;i<size[2];i++){
for(int j=0;j<size[3];j++)
{
  scanf("%d",&b[i][j]);
}
}
int res[size[0]][size[3]];
for(int i=0;i<size[0];i++)
{for(int j=0;j<size[1];j++)
{ res[i][j]=0;
for(int l=0;l<size[1];l++)
{
 res[i][j]+=a[i][l]*b[l][j];
}
}}
printf("Output:\n");
for (int i=0;i<size[0];i++){
for(int j=0;j<size[3];j++)
{
  printf("%d",res[i][j]);
  printf("  ");
}
printf("\n");
}
}
else
{
    printf("Multiplication can't be done");
}
}
