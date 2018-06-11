#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,i,j;
	for (a=100,j=0;a<1000;a++)
	{
		b=1;
		i=2;
		while (b!=0&&i<a)
		{
			b=a%i;
			i++;
		}
		if (b!=0&&i==a) printf("%6d",a),j++;
		if (j==5) printf("\n"),j=0;
	}
	return 0;
}