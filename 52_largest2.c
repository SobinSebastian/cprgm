#include<stdio.h>
void large(int a,int b)
{
    if(a>b)
    {
        printf("%d is larger than %d",a,b);
    }
    else
    {
       printf("%d is larger than %d",b,a);
    }
}
void main()
{
    int a,b,*p1,*p2;
    printf("enter the number :");
    scanf("%d %d",&a,&b);
    p1=&a;
    p2=&b;
    large(*p1,*p2);
}
