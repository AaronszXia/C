#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d;
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a>=b) d=a,a=b,b=d;
	if (b>=c) d=b,b=c,c=d;
	if (a>=b) d=a,a=b,b=d;
	if (a<=0||b<=0||c<=0||c-b>=a)
		printf("不能构成三角形");
	else 
	{
		if (fabs(c*c-(b*b+a*a))<1e-3)
		{
			if (b-a<1e-3)
				printf("等腰直角三角形");
			else
				printf("直角三角形");
		}
		else
		{
			if (b-a<1e-3||c-b<1e-3)
			{
				if (c-a<1e-3)
					printf("等边三角形");
				else
					printf("等腰三角形");
			}
			else
				printf("一般三角形");
		}
	}
	return 0;
}