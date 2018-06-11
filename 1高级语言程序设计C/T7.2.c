#include<stdio.h>
#include<stdlib.h>
int fun(int a[],int n);
void main()
{
	int *p,i,j,m,n;
	scanf("%d%d",&n,&m);
	p=(int*)calloc(n,sizeof(int));
	for(i=0;i<n;i++)
		p[i]=i+1;
	for(i=0,j=0;fun(p,n)!=1;i++)
	{
		if(i==n) i=0;
		if(p[i])
			j++;
		if(j==m)
		{
			p[i]=0;
			j=0;
		}
	}
	for(i=0;i<n;i++)
		if(p[i]) printf("%d",p[i]);
}
int fun(int a[],int n)
{
	int i,s=0;
	for(i=0;i<n;i++)
		if(a[i]) s++;
	return s;
}