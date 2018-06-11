#include<stdio.h>
#include<math.h>
int FindMax(int x,int y)
{
	if (x>y) return x;
	else return y;
}
double Add(double x,double y)
{
	return x+y;
}
int JudgePrime(int n)
{
	int i,k;
	if (n==1) return 0;
	else
	{
		k=(int)sqrt(n);
		for (i=2;i<=k;i++) if (n%i==0) break;
		if (i>k) return 1;
		else return 0;
	}
}
int CalcuAscii(char c)
{
	return (int)c;
}
double Fact(int n)
{
	double s;
	for (s=1;n>1;n--) s*=n;
	return s;
}
void DrawLine1()
{
	int i;
	for (i=1;i<=30;i++)
		printf("-");
	return;
}
void DrawLine2(int n)
{
	int i;
	for (i=1;i<=n;i++)
		printf("-");
	return;
}
void DrawLine3(int n,char c)
{
	int i;
	for (i=1;i<=n;i++)
		printf("%c",c);
	return;
}
int Gcd(int a,int b)
{
	int i;
	for (i=a;!(a%i==0&&b%i==0);i--);
	return i;
}
int CountNarcissus(int m,int n)
{
	int i;
	for (i=m;i<=n;i++)
	{
		if (i==sqrt(i/100,3)+sqrt(i/10%10,3)+sqrt(i%10,3)) printf("%6d",i);
	}
	return i;
}
int SumOdd(int m,int n)
{
	int i,s;
	if (m%2==0) m++;
	for (i=m,s=0;i<=n;i=i+2) if (i%5==0&&i%7==0) s+=i;
	return s;
}
