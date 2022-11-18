#include<stdio.h>
void main()
{
    int n,i,temp=0;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array after sorting");
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d \t",a[i]);
    }
}
