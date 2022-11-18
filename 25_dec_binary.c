#include<stdio.h>
#include<stdlib.h>
void main()
{
    int arr[20],i,n;
    system("cls");
    printf("enter the number\n");
    scanf("%d",&n);
    int temp=n;
    for(i=0;n>0;i++)
    {
        arr[i]=n%2;
        n=n/2;
    }
    printf("binary number for %d is \n",temp);
    for(i=i-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
}
