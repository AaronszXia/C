#include<stdio.h>
#define DAYS_FEB(year) (year%4==0&&year%100||year%400==0)?29:28
void main()
{
	int a;
	scanf("%d",&a);
	a=DAYS_FEB(a);
	printf("days of the FEB.: %d\n",a);
}