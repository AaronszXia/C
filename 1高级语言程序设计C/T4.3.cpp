#include<stdio.h>
#include<math.h>
int main()
{
	int i=1,j=1;
	double x,a=1,sum=0,s=0;
	x=3.5;
	while (a>=1e-5)
	{
		s=s*i;
		a=pow(x,i)/s;
		if(j==1) 
		{
			sum=sum+a;
			j=0;
		}
		else 
		{
			sum=sum-a;
			j=1;
		}
		i++;
		a=fabs(a);
	}
	printf("sum=%.2f\n",sum);
	return 0;
}