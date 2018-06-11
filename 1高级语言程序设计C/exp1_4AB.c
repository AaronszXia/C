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
	int a,b,i,j;
	i=0;
	do
	{
	if (i==0) printf("请输入a和b的值（a,b需满足10<=a<b<=1000,中间用空格隔开）：\n");
	if (i!=0) printf("您的输入有误，请重新输入：\n");
	scanf("%d%d",&a,&b);
	i=1;
	} while (10>a||a>=b||b>1000);
	for (i=a,j=0;i<=b;i++)
	{
		if (judge_prime(i)) printf("%6d",i),j++;
		if (j==5) printf("\n"),j=0;
	}
	return 0;
}