#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,j;
    printf("Enter the size of string");
    scanf("%d",&n);
    char a[n],rev[n];
    printf("enter the string");
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }
     for(i=0;i<n;i++)
    {
        for(j=n;j>n;j--)
        {
            rev[i]=a[j];
        }
    }
     for(i=0;i<n;i++)
    {
        printf("%c",rev[i]);
    }

}
