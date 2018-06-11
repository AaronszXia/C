#include<stdio.h>
void fun(int a[]);
int main()
{
   int array[10]={1,2,3,4,5,6,7,8,9,10},i,m;
   scanf("%d",&m);
   for(i=1;i<=m;i++)
      fun(array);
   for(i=0;i<10;i++)
       printf("%d ",array[i]);
   return 0;
}
void fun(int a[])
{
   int i,k;
   k=a[9];
   for(i=9;i>0;i--)
      a[i]=a[i-1];
   a[0]=k;
   return;
}