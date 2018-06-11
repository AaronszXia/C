#include<stdio.h>
#include<math.h>
int judge_prime(int n)
{
	if (n==1) return 0;
	int i,k;
	k=(int)sqrt(n);
	for (i=2;i<=k;i++)
		if (n%i==0) return 0;
	return 1;
	
}
int main()
{
	int i,j,k;
	scanf("%d",&i);
	for (j=2;j<i;j++)
	{
		if (judge_prime(j)&&judge_prime(i-j))
		{
			printf("%d=%d+%d",i,j,i-j);
			break;
		}
	}
	if (j==i) printf("%d不能被分解为两个质数的和",i);
	return 0;
}