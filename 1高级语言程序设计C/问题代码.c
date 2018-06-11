#include<stdio.h>
#include<math.h>
int main ()
{
	double a,b,c,t;
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a>b) t=a,a=b,b=t;
	if (a>c) t=a,a=c,c=t;
	if (b>c) t=b,b=c,c=t;
	if (a<=0||b<=0||c<=0)
		printf("Error input!\n");
	else if(a+b>c&&a+c>b&&b+c>a)
	{
		if(fabs(a*a+b*b-c*c)<=1e-3)
		{
			if(fabs(a-b)<=1e-3)
				printf("等腰直角三角形\n");
			else printf("直角三角形\n");
		}
		else if(fabs(a-b)<=1e-3||fabs(b-c)<1e-3)
		{
			if(fabs(a-c)<=1e-3)
				printf("等边三角形\n");
			else printf("等腰三角形\n");
		}
		else printf("一般三角形\n");
	}
	else ;
	return 0;
}