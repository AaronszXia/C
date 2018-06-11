#include<stdio.h>
struct Student
{
	char ID[20];
	char name[30];
	int age;
	double score;
};
int i,a;
void ReadOut(struct Student s[],int a);
void main()
{
	struct Student Stu[50];
	FILE *fp;
	fp=fopen("d:\\Info.dat","wb");
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
		fwrite(Stu,sizeof(struct Student),a,fp);
	}
	fclose(fp);
	ReadOut(Stu,a);
}
void ReadOut(struct Student s[],int a)
{
	FILE *fp;
	fp=fopen("d:\\Info.txt","w");
	for(i=0;i<a;i++)
	{
		fprintf(fp,"%s %s %d %g\n",s[i].ID,s[i].name,s[i].age,s[i].score);
	}
	fclose(fp);
}