#include<stdio.h>
void main()
{
    int n,r,a=0,t;
    printf("enter the number");
    scanf("%d",&n);
    t=n;
    while(n!=0)
    {
        r=n%10;
        a=a+r*r*r;
        n=n/10;
    }
    if(a==t)
    {
        printf("%d is Armstrong Number",t);
    }
    else
    {
        printf("%d is not a Armstrong number",t);
    }
}
