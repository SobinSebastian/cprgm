#include<stdio.h>
void main()
{
    int n,p,i;
    printf("enter the no of elements");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the position \n");
    scanf("%d",&p);
    if(p<0||p>n)
    {
        printf("invalid input");
    }
    else
    {
        n=n-1;
        for(i=p-1;i<n;i++)
        {
            a[i]=a[i+1];
        }
        printf("after deleting element \n");
        for(i=0;i<n;i++)
        {
            printf("%d \t",a[i]);
        }
    }
}
