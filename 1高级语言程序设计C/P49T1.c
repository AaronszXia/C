#include<stdio.h>
int main()
{
	int a1,a2,b1,b2,Max,Min;
	scanf("%d,%d,%d,%d",&a1,&a2,&b1,&b2);
	a1>a2?1:Max=a1,a1=a2,a2=Max;
	b1>b2?1:Max=b1,b1=b2,b1=Max;
	a1>b1?Max=a1:Max=b1;
	a2>b2?Min=b2:Min=a2;
	printf("Max=%d\nMin=%d",Max,Min);
	return 0;
}