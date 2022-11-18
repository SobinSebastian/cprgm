#include<stdio.h>
void main()
{
    int a[100][100],b[100][100],result[100][100];
    int i,j,k,r,c;
    printf("enter the row and column of matrixs");
    scanf("%d %d",&r,&c);
    printf("enter the elements of 1st matrix");
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
            printf("enter the elements of 2nd matrix");

            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    scanf("%d",&b[i][j]);
                }
            }
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    result[i][j]=a[i][j]+b[i][j];
                }
            }
            for(i=0;i<r;i++)
            {
                for(j=0;j<c;j++)
                {
                    printf("%d \t",result[i][j]);
                }
            }

}
