#include<stdio.h>
struct Date
{
	int year;
	int month;
	int day;
};
int Judge(struct Date);
int IsLeapYear(struct Date);
int Dayth(struct Date);
void main()
{
	struct Date a;
	scanf("%d%d%d",&a.year,&a.month,&a.day);
	if(!Judge(a))
	{
		printf("Error input");
		return;
	}
	printf("%d",Dayth(a));
}
int Judge(struct Date a)
{
	if(a.year<0||a.month<1||a.month>12||a.day<1||a.day>31) return 0;
	switch(a.month)
	{
		case 4:
		case 6:
		case 9:
		case 11:
			if(a.day==30) return 0;
	}
	if(a.month==2&&IsLeapYear(a)&&a.day>28) return 0;
	if(a.month==2&&a.day>29) return 0;
	else return 1;
}
int IsLeapYear(struct Date a)
{
	if(a.year%4==0&&a.year%100!=0||a.year%400==0)
		return 1;
	else
		return 0;
}
int Dayth(struct Date a)
{
	int i,s=0;
	for(i=1;i<a.month;i++)
	{
		if(i==4||i==6||i==9||i==11)
			s+=30;
		else if(i==2)
		{
			if(IsLeapYear(a))
				s+=29;
			else
				s+=28;
		}
		else
			s+=31;
	}
	s+=a.day;
	return s;
}
