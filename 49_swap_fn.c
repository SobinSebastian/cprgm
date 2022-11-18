#include<stdio.h>
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("numbers before swapping a=%d b=%d \n",a,b);
}
void main()
{
    int x,y;
    printf("enter the numbers ");
    scanf("%d %d",&x,&y);
    printf("numbers before swapping a=%d b=%d",x,y);
    swap(x,y);
}
