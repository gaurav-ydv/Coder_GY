#include<stdio.h>
#include <time.h>
  
int main()
{  clock_t start, end;
     double time_used;
    int i,x,n;
      start = clock();
    printf("Number of Total Elements:");
    scanf("%d",&n);
     int a[n];
    printf("Enter array elements:\n");
    for(i=0;i<n;++i)
        scanf("%d",&a[i]);
     
    printf("\n Enter element to search:");
    scanf("%d",&x);
     
    for(i=0;i<n;++i)
        if(a[i]==x)
            break;
     
    if(i<n)
        printf("Element found at index %d",i);
    else
        printf("Element not found");
  
 end = clock();
time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("\n %f",time_used);

}