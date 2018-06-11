#include<stdio.h>
void DrawPic(int,char);
int main()
{
	DrawPic(7,'*');
	DrawPic(11,'@');
	DrawPic(20,'$');
	return 0;
}
void DrawPic(int n,char c)
{
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<n+i;j++)
		{
			if(j<n-i+1)
				printf(" ");
			else
				printf("%c",c);
		}
	printf("\n");
	}
	return;
}
