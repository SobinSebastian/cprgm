#include<stdio.h>
int main()
{
    int num,i=0,rem,d=0,m=1;
    printf("enter a binary number");
    scanf("%d",&num);
    do
    {
        rem=num%10;
        d=d+rem*m;
        num=num/10;
        m=m*2;
    } while(num!=0);
    printf("decimal number is %d",d);
}
