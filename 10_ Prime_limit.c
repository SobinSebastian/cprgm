#include<stdio.h>
void prime(int i)
{
    int j,count=0;
    for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==0)
        {
            printf(" %d\n",i);
        }
}
void main()
{
    int l,i;
    printf("enter the number");
    scanf("%d",&l);
    for(i=1;i<=l;i++)
    {
        prime(i);
    }
}
