#include<stdio.h>
void main()
{
    int num,rem,sum=0,temp;
    printf("Enter the Number");
    scanf("%d",&num);
    temp=num;
    while(num!=0)
    {
       rem=num%10;
       sum=sum+rem;
       num=num/10;
    }
    printf(" Sum of digits of %d is : %d",temp,sum);
}
