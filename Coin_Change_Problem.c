#include <stdio.h>
int main()
{ int n;
	scanf("%d",&n);
	int m;
	scanf("%d",&m);
	int c[m];
	c[0]=0;
	for (int i = 1; i <= m; i++)
	{
		scanf("%d",&c[i]);
		
	}
	for (int i = 0; i <= m; i++)
	{ int temp=0;
	 if(c[i]>c[i+1])
        {temp=c[i];
        c[i]=c[i+1];
        c[i+1]=temp;}
	}
int x[m+1][n+1];
for(int j=0;j<=n;j++)
{ x[0][j]=0;}

for(int j=0;j<=m;j++)
{ x[j][0]=1;}

for(int j=1;j<=m;j++)
{
for(int z=0;z<=n;z++)
	{if((int)c[j]>z)
		x[j][z]=x[j-1][z];
	 else
        x[j][z]=x[j-1][z]+x[j][z-(int)c[j]];


}}
 printf("%d",x[m][n]);
}