#include<stdio.h>
int fun(int **p,int n)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(p[i][j]!=p[n-i-1][n-j-1])
				return 0;
		}
	}
	return 1;
}
void main()
{
	int i,j,**p,n;
	scanf("%d",&n);
	p=(int **)malloc(n*sizeof(int *));
	for(i=0;i<n;i++)
		p[i]=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
			scanf("%d",&p[i][j]);
	}
	if(fun(p,n))
		printf("%s","Yes");
	else
		printf("%s","No");
}