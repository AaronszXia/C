#include<stdio.h>
struct Student
{
	char ID[20];
	char name[30];
	int age;
	double score;
};
int i,a;
void ReadOut(FILE *fp);
void main()
{
	struct Student Stu[50];
	FILE *fp;
	fp=fopen("d:\\Info.txt","w");
	do
	{
		printf("Please input the number of the students(no more than 50):");
		scanf("%d",&a);
	}while(a<1||a>50);
	for(i=0;i<a;i++)
	{
		scanf("%s%s%d%lf",Stu[i].ID,Stu[i].name,&Stu[i].age,&Stu[i].score);
	}
	for(i=0;i<a;i++)
	{
		fprintf(fp,"%s\t%s\t%d\t%g\n",Stu[i].ID,Stu[i].name,Stu[i].age,Stu[i].score);
	}
	fclose(fp);
	fp=fopen("d:\\Info.txt","r");
	ReadOut(fp);
}
void ReadOut(FILE *fp)
{
	char ch=fgetc(fp);
	while(!feof(fp))
	{
		putchar(ch);
		ch=fgetc(fp);
	}
	fclose(fp);
}