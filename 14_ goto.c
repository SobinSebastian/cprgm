#include<stdio.h>
void main()
{
    int n;
    printf("enter the number");
    scanf("%d",&n);
    FROM:
        printf("%d \t",n);
        n--;
        if(n>0)
        {
            goto FROM;
        }

}
