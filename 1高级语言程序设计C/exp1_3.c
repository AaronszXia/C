#include<stdio.h>
int main()
{
	double item,sum=0;
	int i,sign=1;
	for (i=1;i<=1000;i++)
	{
		item=sign*1.0/i;
		sum+=item;
		sign=-sign;
	}
	printf("%f",sum);
	return 0;
}