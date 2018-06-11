#include <stdio.h>
int main( )
{
	int a,b,c;
	scanf("%d%d",&a,&b);
	c=b;
	while (a%c!=0||b%c!=0) c--;
	printf("gcd=%d",c);
	return 0;
}