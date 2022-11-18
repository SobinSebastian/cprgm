#include<stdio.h>
void fact(int a)
{
     int j,f=1;
        for(j=2;j<=a;j++)
        {
            f=f*j;
        }
}
void main()
{
    int n,s=1,i,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        s=s*n;
        fact(i+1);
        printf("s=%d  f=%d\n",s,f);
    }
}
