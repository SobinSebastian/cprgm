#include<stdio.h>
void main()
{
    int n,i,ch;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
    printf("enter the array elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("select the operation \n 1.delete element form beginning \n 2.delete element from end \n 3.delete from specific position");
    scanf("%d",&ch);
    switch(ch)
    {
    case 1:
        printf("array after deleting :");
        for(i=0;i<n-1;i++)
        {
        a[i]=a[i+1];
        printf("%d \n",a[i]);
        }
        break;
    case 2:
         printf("array after deleting :");
         n=n-1;
        for(i=0;i<n;i++)
        {
             printf("%d \n",a[i]);
        }
        break;
    case 3:
        printf("enter the position of element");
        int p;
        scanf("%d",&p);
        if(p<0||p>n)
        {
            printf("invalid position");
        }
        else
        {
            for(i=p-1;i<n-1;i++)
            {
              a[i]=a[i+1];
            }
            printf("array after deleting :");
            for(i=0;i<n-1;i++)
            {
                printf("%d\n",a[i]);
            }
        }
        break;
    }
}
