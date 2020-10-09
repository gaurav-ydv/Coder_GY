void merge(int a[], int low, int  mid, int high )
{    int max;
	int temp[max];
	int i = low;
	int j = mid +1 ;
	int k = low ;

	while( (i <= mid) && (j <=high) )
	{
		if(a[i] <= a[j])
			temp[k++] = a[i++] ;
		else
			temp[k++] = a[j++] ;
	}

	while( i <= mid )
		temp[k++]=a[i++];

	while( j <= high )
		temp[k++]=a[j++];

	for(i= low; i <= high ; i++)
		a[i]=temp[i];

}

void merge_sort( int low, int high )
{
	int mid;
	if( low != high )
	{
		mid = (low+high)/2;
		merge_sort( low , mid );
		merge_sort( mid+1, high );
		merge( low, mid, high );
	}
}

int main()
{
	int i,n;

	printf("Enter the number of elements : ");
	scanf("%d",&n);
	int a[n];
	printf("Enter element : ");
	for(i=0;i<n;i++)
	{scanf("%d",&a[i]);
	}


	merge_sort( 0, n-1);

	printf("\nSorted list is :\n");
	for( i = 0 ; i<n ; i++)
		printf("%d ", a[i]);
	printf("\n");

	return 0;
}
