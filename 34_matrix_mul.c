#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],result[100][100];
    int i,j,k,r1,r2,c1,c2;
    printf("enter the row and column of 1st matrix");
    scanf("%d %d",&r1,&c1);
    printf("enter the row and column of 2nd matrix");
    scanf("%d %d",&r2,&c2);
    if(r2!=c1)
    {
        printf("error multiplication is not possiable");
    }
    else
    {

        printf("enter the elements of 1st matrix");
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        printf("enter the elements of 2nd matrix");
        for(i=0;i<r2;i++)
        {
            for(j=0;j<c2;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        result[i][j]=0;
        for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                for(k=0;k<c1;k++)
                {
                    result[i][j]=result[i][j]+a[i][k]*b[k][j];
                }
            }
        }
    }

    for(i=0;i<r1;i++)
        {
            for(j=0;j<c1;j++)
            {
                printf("%d \t ",result[i][j]);
            }
        }
}
