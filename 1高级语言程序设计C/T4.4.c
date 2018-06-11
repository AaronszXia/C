#include<stdio.h>
int main()
{
	int a,b,c,i;
	for (a=1,b=1,i=1;i<=10;i++)
	{
		if (i==1||i==2) 
		{
			printf("1 ");
			continue;
		}
		a=b+a;
		printf("%d ",a);
		c=a;
		a=b;
		b=c;
	}
	return 0;
}