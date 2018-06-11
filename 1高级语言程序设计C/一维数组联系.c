#include<stdio.h>
#define p 6
int add_all(int a[],int n)
{
	int i,s;
	for (i=0,s=0;i<n;i++)
	{
		s+=a[i];
	}
	return s;
}
int main()
{
	int array[p]={1,2,3,4,5,6};
	printf("%d\n",add_all(array,p));
}