#include<stdio.h>
#define size 999
int fun(int array[],int a,int b,int n);
int main()
{
	int array[size],i,j,a,b,n;
	do
	{
		scanf("%d%d",&a,&b);
	}while (!(1<=a&&a<=b&&b<=1000));
	n=b-a;
	j=fun(array,a,b,n);
	for(i=0;i<j;i++)
		printf("%d ",array[i]);
	return 0;
}
int fun(int array[],int a,int b,int n)
{
	int i,j;
	for (i=a,j=0;i<b;i++)
	{
		if ((i%7==0||i%11==0)&&(i%77!=0))
		{
			array[j]=i;
			j++;
		}
	}
	return j;
}