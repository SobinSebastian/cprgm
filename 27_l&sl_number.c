#include<stdio.h>
void main()
{
    int n,i,j,l=0,sl=0;
    printf("enter no of elements");
    scanf("%d",&n);
    int a[n];
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(j=0;j<n;j++)
    {
        if(l<a[j])
        {
            sl=l;
            l=a[j];
        }
        else if(sl<a[j])
        {
            sl=a[j];
        }
    }
printf("largest number is %d\n second largest number is %d",l,sl);
}
