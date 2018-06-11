#include<stdio.h> 
int main()
{
	int n,i,j;
	scanf("%d",&n);
	int a[n][n];
	for (i=0;i<n;i++)
	{
		for (j=0;j<=i;j++)
		{
			if (j==0||i==j) a[i][j]=1;
			else a[i][j]=a[i-1][j-1]+a[i-1][j];
			printf("%5d",a[i][j]);
		}
		printf("\n");
	}
    return 0;
}