#include<stdio.h>
int main()
{
	int x;
	scanf("%d",&x);
	switch (x/10)
	{
		case 10:
		case 9:
		{
			printf("%d--A",x);
			break;
		}
		case 8:
		{
			printf("%d--B",x);
			break;
		}
		case 7:
		{
			printf("%d--C",x);
			break;
		}
		case 6:
		{
			printf("%d--D",x);
			break;
		}
		default:
		{
			printf("%d--E",x);
			break;
		}
	}
	return 0;
}