#include<stdio.h>
#include<time.h>
#include <stdlib.h>
int main()
{
	char a[10],b[10];
	char A,B;
	int c,C,s;
	 srand((unsigned)time(NULL));
	 printf("情侣幸福指数计算器v1.0\n\nProgrammed by 夏龙飞\n\n使用方法：输入你的名字（两遍）和她/他的名字（两遍），即可得到你们之间的幸福指数！\n\n申明：1、本软件由相同的名字计算得到的数值会随着外部因素的改变而发生微小变化（变化范围在±10之间）\n2、本软件仅供娱乐\n\n");
	printf("现在请输入你的姓名：");
	scanf("%s", &a);
	printf("请再次输入你的姓名：");
	scanf("%s", &A);
	printf("请输入另一个姓名：");
	scanf("%s",&b);
	printf("请再次输入另一个姓名：");
	scanf("%s",&B);
	C=A+B;
	c=C%6;
	s=rand()%10;
	if(c==0)
	{
		s=100;
	printf("\n%s和%s的幸福指数为%d!\n\n哇塞，你们的幸福指数爆表啦！",a,b,s);
	}
	else if(c==1)
	{
		s=s+90;
	printf("\n%s和%s的幸福指数为%d!\n\n你们会幸福的！",a,b,s);
	}
	else if(c==2)
	{
		s=s+80;
	printf("\n%s和%s的幸福指数为%d!\n\n嗯，不错！你们有很大的上升空间！",a,b,s);
	}
	else if(c==3)
	{
		s=s+70;
	printf("\n%s和%s的幸福指数为%d!\n\n哎哟，差一点就红分了！",a,b,s);
	}
	else if(c==4)
	{
		s=s+60;
	printf("\n%s和%s的幸福指数为%d!\n\n要加油哦！",a,b,s);
	}
	else if(c==5)
	{
		s=59;
	printf("\n%s和%s的幸福指数为%d!\n\n好遗憾啊，你们真的不适合在一起！T_T",a,b,s);
	}
	return 0;
}