#include<stdio.h>
int fact(int a)
{
    if(a==0)
    {
        return (1);
    }
    else
    {
        return(a*fact(a-1));
    }
}
void main()
{
    int a,f;
    printf("enter the number");
    scanf("%d",&a);
    f=fact(a);
    printf("factorial of %d is %d",a,f);

}
