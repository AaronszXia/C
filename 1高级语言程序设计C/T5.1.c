#include<stdio.h>
#include<math.h>
#define PI 3.14159
double S(double r,double h)
{
	return PI*r*sqrt(h*h+r*r)+PI*r*r;
}
double V(double r,double h)
{
	return 1/3.0*PI*r*r*h;
}
int  main()
{
	double r,h;
	scanf("%lf%lf",&r,&h);
	printf("Radius=%.2f,Height=%.2f,Area=%.2f,Volume=%.2f",r,h,S(r,h),V(r,h));
	return 0;
}