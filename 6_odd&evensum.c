#include<stdio.h>
void main()
{
    int num,i,limit,odd=0,even=0;
    printf("Enter the limit");
    scanf("%d",&limit);
    for(i=1;i<=limit;i++)
    {
        if(i%2==0)
        {
            even=even+i;
        }
        else
        {
            odd=odd+i;
        }
    }
    printf("Odd sum =%d \nEven sum=%d",odd,even);
}
