#include<stdio.h>
int a[100],ch;
int top=-1;
void push()
{
    int val;
   if(top==99)
   {
       printf("Stack Over Flow");
   }
   else
   {
       top=top+1;
       printf("\n enter the value:");
       scanf("%d",&a[top]);
       printf("One item inserted to stack");
    }
}
void pop()
{
    if(top==-1)
        {
           printf("Stack Under flow !");
        }
    else
    {
        top=top-1;
        printf("One Item Deleted from Stack");
    }
}
void display()
{
    if(top==-1)
   {
       printf("Stack Empty");
   }
   else
   {
       int i;
       for(i=top;i>=0;i--)
       {
           printf("%d",a[i]);
       }
    }

}
void main()
{
    do{
        printf("Stack Operations \n\t 1.PUSH \n\t 2.POP \n\t 3.DISPLAY \n Select Your Operation : \n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                push(top);
                break;
            case 2:
                pop(top);
                break;
            case 3:
                display(top,a);
                break;
            default:
                printf("\n Invalid Operation !! Try Again....");
        }
        printf("\n continue......?\n 1.Yes \n 2. No");
    scanf("%d",&ch);
    }while(ch==1);
}
