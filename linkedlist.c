#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next
}*head=NULL;
void display()
{
    if(head==NULL)
    {
        printf("List is empty!");
    }
    else
    {
        struct node * temp=head;
        while(temp!=NULL)
        {
            printf("%d",temp->data);
            temp=temp->next;

        }

    }
}
void createnode(int value)
{
    struct node*newnode=malloc(sizeof(struct node));
    newnode->data=value;
    if(head==NULL)
    {
        newnode->next=NULL;
        head =newnode;
    }
    else
    {
        newnode->next=head;
        head =newnode;
    }
    printf("one item in inserted:\n");
}
void main()
{
     int ch;
    do{
    printf("============= LINKED LIST =============");
    printf("Operations on Linked list \n 1.add at beggining \n 2.display");
    printf("Enter Your Operation :");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
        printf("Enter the Value To be Inserted:\n");
        int value;
        scanf("%d",&value);
        createnode(value);
        break;

    case 2:
        display();
        break;
    default:
        printf("error");
        }
    printf("continue ......\n 1.yes\n 2.no");
    scanf("%d",&ch);

    }while(ch==1);
}
