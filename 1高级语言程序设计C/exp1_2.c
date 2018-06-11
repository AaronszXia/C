#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d;
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a<=b) d=a,a=b,b=d;
	if (b<=c) d=b,b=c,c=d;
	if (a<=b) d=a,a=b,b=d;
	if (a<=0||b<=0||c<=0||a-b>=c)
	printf("以%g,%g,%g为三边的三角形不存在！",a,b,c);
	else if (a-b<1e-3&&b-c<1e-3)
	printf("%g,%g,%g是一个等边三角形",a,b,c);
	else if (b-c<1e-3&&fabs(a*a-(b*b+c*c))<1e-3)
	printf("%g,%g,%g是一个等腰直角三角形",a,b,c);
	else if (a-b<1e-3||b-c<1e-3)
	printf("%g,%g,%g是一个等腰三角形",a,b,c);
	else if (fabs(a*a-(b*b+c*c))<1e-3)
	printf("%g,%g,%g是一个直角三角形",a,b,c);
	else
	printf("%g,%g,%g是一个一般三角形",a,b,c);
	return 0;
}