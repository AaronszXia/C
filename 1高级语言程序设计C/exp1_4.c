#include<stdio.h>
#include<math.h>
int judge_prime(int n)
{
	if (n==1) return 0;
	else
	{
		int i,k;
		k=(int)sqrt(n);
		for (i=2;i<=k;i++)
		{
			if (n%i==0) break;
		}
		if (i>k) return 1;
		else return 0;
	}
}
int main()
{
	int x;
	scanf("%d",&x);
	if (judge_prime(x)) printf("%d是质数",x);
	else printf("%d不是质数",x);
	return 0;
}