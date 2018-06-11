#include <stdio.h> 
int main( )
{
	int a,i,j;
	for (a=100,j=0;a<=999;a++)
	{
		for(i=2;i<=a;i++)
		{
			if (a%i==0) break;
		}
		if (i>=a) printf("%6d",a),j++;
		if (j==5) printf("\n"),j=0;
	}
	return 0;
}