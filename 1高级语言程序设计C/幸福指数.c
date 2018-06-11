#include<stdio.h>
#include<time.h>
#include <stdlib.h>
int main()
{
	char a[20],b[20];
	char A,B;
	int c,C,s;
	 srand((unsigned)time(NULL));
	 printf("情侣幸福指数计算器\n使用方法：输入你的名字（两遍）和她/他的名字（两遍），即可得到你们之间的幸福指数！\n申明：1、本软件计算得到的数值会随着外部因素的改变而发生微小变化（变化范围在±10之间）\n2、本软件仅供娱乐\n");
	printf("现在请输入你的姓名：");
	scanf("%s", &a);
	printf("请再次输入你的姓名：");
	scanf("%s", &A);
	printf("请输入另一个姓名：");
	scanf("%s",&b);
	printf("请再次输入另一个姓名：");
	scanf("%s",&B);
	printf("a=%d\nb=%d\n",a,b);
	printf("A=%d\nB=%d\ns1=%d\n",A,B,s);
	C=A+B;
	printf("C=%d\n",C);
	c=C%6;
	printf("c=%d\n",c);
	s=rand()%10;
	printf("rand(s)=%d\n",s);
	if(c=0)
	{
		s=100;
	}
	else if(c=1)
	{
		s=s+90;
	}
	else if(c=2)
	{
		s=s+80;
	}
	else if(c=3)
	{
		s=s+70;
	}
	else if(c=4)
	{
		s=s+60;
	}
	else
	{
		s=59;
	}
	printf("%s和%s的幸福指数为%d!",a,b,s);
	return 0;
}