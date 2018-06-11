#include<stdio.h>
void main()
{
	int i=0,a[10];
	char s[]="0123456789ABCDEF";
	int n;
	scanf("%d",&n);
	do
	{
		a[i]=n%16;
		n=n/16;
		i++;
	}while(n!=0);
	i--;
	for(;i>=0;i--)
		printf("%c",s[a[i]]);
}