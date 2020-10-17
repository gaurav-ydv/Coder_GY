#include <stdio.h>
#include <time.h>
int main()
{  clock_t start, end;
     double time_used;
int i, low, high, mid, n, key;
start = clock();
printf("Enter number of elements\n");
scanf("%d",&n);
int array[n];
printf("Enter %d integers\n", n);
for(i = 0; i < n; i++)
scanf("%d",&array[i]);
printf("Enter value to find\n");
scanf("%d", &key);
low = 0;
high = n - 1;
mid = (low+high)/2;
while (low <= high) {
if(array[mid] < key)
low = mid + 1;
else if (array[mid] == key) {
printf("%d found at location %d.\n", key, mid+1);
break;
}
else
high = mid - 1;
mid = (low + high)/2;
}
if(low > high)
printf("Not found! %d isn't present in the list.\n", key);
end = clock();
time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
printf("\n %f",time_used);
}