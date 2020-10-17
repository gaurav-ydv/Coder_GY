#include <stdio.h>
#include <time.h>
int  main()
{ clock_t start, end;
     double time_used;
start= clock();
int x=8;
for(int i=0;i<200;i++)
{printf("Gaurav is great :%d\n",x);
x=x+1;}
end = clock();
time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("\n %f",time_used);
	
	return 0;
}