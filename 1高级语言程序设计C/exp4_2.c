#include<stdio.h>
int i,j,s;
void input(int a[][5]);
void output(int a[][5]);
int fun1(int a[][5]);
int fun2(int a[][5]);
void main()
{
	int arr[5][5];
	input(arr);
	output(arr);
	printf("\n%d\n%d",fun1(arr),fun2(arr));
}
void input(int a[][5])
{
	for(i=0;i<5;i++)
		for(j=0;j<5;j++)
			scanf("%d",&a[i][j]);
}
void output(int a[][5])
{
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
fun1(int a[][5])
{
	s=0;
	for(i=0;i<5;i++)
		s+=a[i][i];
	return s;
}
fun2(int a[][5])
{
	s=0;
	for(i=0;i<5;i++)
		s+=a[i][4-i];
	return s;
}