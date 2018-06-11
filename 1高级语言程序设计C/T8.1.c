#include<stdio.h>
#include<string.h>
void fun(char *p)
{
	char a[20];
	int i=0,j;
	strcpy(a,p);
	for(j=0;a[j];j++)
	{
		if(a[j]>='0'&&a[j]<='9')
			p[i++]=a[j];
	}
	p[i]='\0';
}
void main()
{
	char a[20];
	gets(a);
	fun(a);
	puts(a);
}