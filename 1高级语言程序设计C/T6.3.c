#include<stdio.h>
#define size 6
int main()
{
	int array[size],i,j,m,n;
	double s,a;
	for(i=0;i<size;i++)
		scanf("%d",&array[i]);
	m=array[0];
	n=m;
	for(i=0;i<size;i++)
	{
		if(array[i]>m)
			m=array[i];
		if(array[i]<n)
			n=array[i];
	}
	for(i=0,j=size,s=0;i<size;i++)
	{
		if(n==array[i]||m==array[i])
			array[i]=0;
			j--;
		s+=array[i];
	}
	a=s/j;
	printf("count=%d,average=%.2f\n",j,a);
	return 0;
}