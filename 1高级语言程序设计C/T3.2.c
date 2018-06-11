#include<stdio.h>
#include<math.h>
int main()
{
	int x,y;
	scanf("%d",&x);
	x=fabs(x);
	y=x%10+x/10%10+x/100;
	printf("%d\n",y);
	return 0;
}