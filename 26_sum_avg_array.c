#include<stdio.h>
void main()
{
    int n,i,j,sum=0;
    float avg;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        sum=sum+a[j];
        avg=sum/n;
    }
    printf("sum of elements is %d \n average of elements are %f",sum,avg);
}
