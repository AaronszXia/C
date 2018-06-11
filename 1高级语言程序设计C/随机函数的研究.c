#include<stdio.h>
#include<time.h>
#include<stdlib.h>
int main()
{
	int i=1,a=10000;
	double b[a],s=0,ave;
	srand(time(NULL));
	for (;i<=a;i++)
	{
		b[i]=rand()%100;
		printf("b%d=%f\n",i,b[i]);
		s+=b[i];
	}
	ave=s/a;
	printf("ave=%f\n",ave);
	return 0;
}