#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d;
	scanf("%lf%lf%lf",&a,&b,&c);
	if (a>=b) d=a,a=b,b=d;
	if (b>=c) d=b,b=c,c=d;
	if (a>=b) d=a,a=b,b=d;
	if (a<=0||b<=0||c<=0||c-b>=a)
		printf("���ܹ���������");
	else 
	{
		if (fabs(c*c-(b*b+a*a))<1e-3)
		{
			if (b-a<1e-3)
				printf("����ֱ��������");
			else
				printf("ֱ��������");
		}
		else
		{
			if (b-a<1e-3||c-b<1e-3)
			{
				if (c-a<1e-3)
					printf("�ȱ�������");
				else
					printf("����������");
			}
			else
				printf("һ��������");
		}
	}
	return 0;
}