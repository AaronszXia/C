#include<stdio.h>
#include<math.h>
int judge_prime(int n)
{
	int i,k;
	if (n==1) return 0;
	k=(int)sqrt(n);
	for (i=2;i<=k;i++)
		if (n%i==0) return 0;
	return 1;
}
int main()
{
	int i,j,k;
	for (i=4,k=0;i<=2000;i+=2)
	{
		for (j=2;j<i;j++)
		{
			if (judge_prime(j)&&judge_prime(i-j))
			{
				printf("%4d=%4d+%4d",i,j,i-j);
				k++;
				if (k%4==0) printf("\n");
				else printf(" ");
				break;
			}
		}
	}
	return 0;
}
