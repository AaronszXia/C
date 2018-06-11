#include <stdio.h>
struct Student
{
	char ID[10];
	char name[20];
	int score;
}Stu[10];
void main()
{
	int a,i,ScoreMax;
	double b=0;
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%s",&Stu[i].ID);
		scanf("%s",&Stu[i].name);
		scanf("%d",&Stu[i].score);
		b+=Stu[i].score;
	}
	b=b/a;
	ScoreMax=Stu[0].score;
	for(i=0;i<a;i++)
	{
		ScoreMax=ScoreMax>=Stu[i].score?ScoreMax:Stu[i].score;
	}
	for(i=0;i<a;i++)
	{
		if(ScoreMax==Stu[i].score) break;
	}
	printf("The average score=%.2f\n",b);
	printf("The student who has the highest score is:%s %s %d",Stu[i].ID,Stu[i].name,Stu[i].score);
}
