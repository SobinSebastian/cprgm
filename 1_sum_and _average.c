#include<stdio.h>
#include <stdlib.h>
void main()
{
    int a,b,c,sum;
    float avg;
    printf("Enter The First Number :");
    scanf("%d",&a);
    printf("Enter The Second Number :");
    scanf("%d",&b);
    printf("Enter The Third Number :");
    scanf("%d",&c);
    sum=a+b+c;
    avg=sum/3;
    printf("%d + %d +%d = %d",a,b,c,sum);
    printf("average of %d,%d&%d is %fl",a,b,c,avg);
}
