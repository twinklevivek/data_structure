#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;

};
struct node*head=NULL;
int display()
{
  struct node*ptr=head;
  if(head==NULL)
    printf("List is Empty");
    else
    {
        while(ptr!=NULL)
        {
            printf("%d",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }
}
void insertEnd(int val)
{
   struct node*ptr=head;
   temp=(struct node*)malloc(sizeo)

    }

  
