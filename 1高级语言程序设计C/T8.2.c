#include<stdio.h>
#include<string.h>
void fun(char *p)
{
	char b;
	int i,j,n=strlen(p);
	for(i=0,j=n-1;i<j;i++,j--)
	{
		b=p[i];
		p[i]=p[j];
		p[j]=b;
	}
}
void main()
{
	char a[20];
	gets(a);
	fun(a);
	puts(a);
}