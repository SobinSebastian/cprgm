#include<stdio.h>
#define SIZE 10
int a[10],r=-1,f=-1;
void enqueue()
{
    if(r==SIZE-1)
    {
        printf("Over flow!");
    }
    else
    {
        f=0;
        r=r+1;
        printf("Enter the Element :");
        scanf("%d",&a[r]);
        printf("One Item Is Inserted");
    }
}
void dequeue()
{
    if(f==-1||f>r)
    {
        printf("\n\n Under flow");
    }
    else
    {
        printf("Element deleted from queue is: - %d",a[f]);
        f=f+1;
    }
}
void show()
{
    if(f==-1)
    {
        printf("\n\n Queue is Empty:");
    }
    else
    {
     for(int i=f;i<r+1;i++)
     {
         printf("%d \n ",a[i]);
     }
    }
}
void main()
{
    int ch;
    do{
        printf("Queue Operations \n\t 1.Insert \n\t 2.Delete \n\t 3.DISPLAY \n Select Your Operation : \n");
        scanf("%d",&ch);
        switch (ch)
        {
            case 1:
                enqueue();
                break;
            case 2:
                dequeue();
                break;
            case 3:
                show();
                break;
            default:
                printf("\n Invalid Operation !! Try Again....");
        }
        printf("\n\n continue......?\n 1.Yes \n 2. No \n\n");
    scanf("%d",&ch);
    }while(ch==1);
}
