//Selection Sort Program
#include <stdio.h>
void  main()
{
  int  n,flag, t;

  printf("Enter the size of array:");
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);

  for (int i = 0; i< (n - 1); i++) 
  {
    flag = i;

    for (int j = i+ 1; j < n; j++)
    {
      if (a[flag] > a[j])
           {flag= j;}
    }
    if (flag != i)
    {
      t = a[i];
      a[i] = a[flag];
      a[flag] = t;
    }
  }
  printf("Output:");
printf("\n");
for (int i = 0; i < n; i++)
{printf("%d\n", a[i]);}
//By Gaurav Yadav(11911038|CSE)
}

