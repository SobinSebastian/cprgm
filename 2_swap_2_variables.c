#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter The Numbers");
    scanf("%d%d",&a,&b);
    printf("Numbers before swapping a=%d b=%d \n",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Numbers after swapping a=%d b=%d",a,b);
}

