#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter the numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is Largest number",a);
        }
        else
        {
            printf("%d is Largest number",c);
        }
    }
    else
    {
        if(b>c)
        {
            printf("%d is Largest Number",b);
        }
        else
        {
            printf("%d is largest number",c);
        }
    }
    return 0;
}
