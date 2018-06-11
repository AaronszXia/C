#include <stdio.h>
int main()
{
    int k,n=0;
    double s=0;
    scanf("%d",&k);
    do 
    {
        n++;
        s+=1/n;
    } while (s<=k); 
    printf("%d\n",n);
    return 0;
}
