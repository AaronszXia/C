#include<stdio.h>
int main()
{
	int x,i,k;
	scanf("%d",&x);
	if (x==1)
	printf("1不是质数");
	else
	{
		for (i=2;i<=x;i++)
		{
			if (x%i==0) break;
		}
		if (i>=x) printf("%d是质数",x);
		else printf("%d不是质数",x);
	}
	return 0;
}