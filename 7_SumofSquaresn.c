#include<stdio.h>
void main()
{
    int n,i,sum=0,sq;
    printf("enter the limit");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sq=i*i;
        sum=sum+sq;
    }
    printf("Sum of Squares of first %d natural numbers is %d",n,sum);
}
