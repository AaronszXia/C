#include<stdio.h>
int main()
{
	int m,n,p;
	scanf("%d%d",&m,&n);
	if (m<n) p=m,m=n,n=p;
	while (m!=n)
	{
		p=m-n;
		if (n<p) m=n,n=p,p=m;
		m=n,n=p;
	}
	printf("gcd=%d",m);
	return 0;
}