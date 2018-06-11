#include<stdio.h>
void DrawLine(int n,char c)
{
	int i;
	for(i=1;i<=n;i++)
	printf("%c",c);
	return ;
	}
	int main()
	{
		int m;
		char b;
		scanf("%d%c",&m,&b);
		printf("%c",b);
		DrawLine(m,b);
		return 0;
	}