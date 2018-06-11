#include<stdio.h>
void main()
{
	int i,j;
	char a[100];
	gets(a);
	for(i=0;a[i]!='\0';)
	{
		if(a[i]==' ')
			for(j=i;a[j]!='\0';j++)
				a[j]=a[j+1];
		if(a[i]!=' ') i++;
	}
	puts(a);
}