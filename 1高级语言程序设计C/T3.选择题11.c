#include<stdio.h>
int main()
{
	float a,d;
	a=(d=1, d=5, d++);
	printf("%f,%f",a,d);
	return 0;
}