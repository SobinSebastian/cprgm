#include<stdio.h>
void fabi(int n)
{
    static int c=0,a=0,b=1;
    if(n>0)
    {
      c=a+b;
      a=b;
      b=c;
      printf("%d\t",c);
      fabi(n-1);
    }
}
void main()
{
    int n;
    printf("enter the limit");
    scanf("%d",&n);
    printf("Fibonacci is series:%d\t%d\t",0,1);
    fabi(n-2);
}
