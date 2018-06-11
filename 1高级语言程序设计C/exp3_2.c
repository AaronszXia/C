#include<stdio.h>
int i,n;
void print_all(double a[])
{
	for(i=0;i<10;i++)
		printf("%g ",a[i]);
}
double ave(double a[])
{
	double s=0;
	for(i=0;i<10;i++)
		s+=a[i];
	return s/10;
}
double max(double a[])
{
	double max=*a;
	for(i=0;i<10;i++)
		if(a[i]>max)
			max=a[i];
	return max;
}
int find(double a[],double x)
{
	for(i=0;i<10;i++)
		if(a[i]==x)
			return 1;
	return 0;
}
void reorder(double a[])
{
	int j;
	double p;
	for(i=0;i<9;i++)
	{
		for(j=0;j<9;j++)
		{
			if(a[j]>a[j+1])
			{
				p=a[j+1];
				a[j+1]=a[j];
				a[j]=p;
			}
		}
	}
	for(i=0;i<10;i++)
		printf("%g ",a[i]);
}
void main()
{
	double array[10],x;
	for(i=0;i<10;i++)
		scanf("%lf",&array[i]);
	print_all(array);
	printf("\nThe average is %g",ave(array));
	printf("\nThe maximum is %g",max(array));
	printf("\nPlease input the element you want to search:");
	scanf("%lf",&x);
	if(find(array,x))
		printf("%g exists in this array",x);
	else
		printf("%g doesn't exist in this array",x);
	printf("\nNow the array will be reordered from the minimum to the maximum:\n");
	reorder(array);
}