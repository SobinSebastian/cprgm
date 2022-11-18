#include<stdio.h>
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}
int main()
{
    int n,f;
    printf("enter the number");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial of %d is %d",n,f);
}
