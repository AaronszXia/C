#include<stdio.h>
int main()
{
	int i=8,j=10,k=12,m,n,p;
	i=i+1;
	m=i;
	n=j;
	j=j-1;
	m=m+1;
	k=k-1;
	p=m*n+k;
	n=n+1;
	printf("%d",p);
	return 0;
	}