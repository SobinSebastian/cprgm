#include<stdio.h>
void main()
{
    int n,s,i,c;
    printf("enter the number of array \n");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the element to search");
    scanf("%d",&s);
    for(i=0;i<n;i++)
    {
        if(a[i]==s)
        {
            printf("%d is found in array position %d",s,i+1);
            break;
        }
        else if(a[i]!=s)
        {
            c++;
        }
    }
    if(c==n)
    {
        printf("item not found ");
    }

}
