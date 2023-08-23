#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head=NULL;
int display()
{
    struct node *ptr=head;
    if(head==NULL)
        printf("List is Empty");
    else
    {
        while(ptr !=NULL)
        {
            printf("%d ",ptr->data);
            ptr=ptr->next;
        }
        printf("\n");
    }    
}
void insertEnd(int val)
{
    struct node *ptr=head;
    struct node *temp=(struct node *)malloc(sizeof(struct node *));
    temp->data=val;
    temp->next=NULL;
if(head==NULL)
{
    head=temp;
    return;
}
while(ptr->next !=NULL)
     ptr=ptr->next;
ptr->next=temp;
return;   

}
void deleteend()
{
 struct node *ptr=head;
 struct node *p;
 if(head==NULL)
     printf("List is Empty");
 while(ptr->next !=NULL)
 {
      p=ptr;
      ptr=ptr->next;
 }    
 p->next=NULL;
 free(ptr);
 return;
}
void firstInsert(int val)
{
   
    struct node *temp;
    temp=(struct node *)malloc(sizeof(struct node *));
    temp->data=val;
    temp->next=head;
    head=temp;
    return;
}
void firstDelete()
{
         struct node *ptr;  
    if(head == NULL)  
    {  
        printf("\nList is empty\n");  
    }  
    else   
    {  
        ptr = head;  
        head = ptr->next;  
        free(ptr);  
       
    }  
    
    
    
}
void midInsert(int val)
{
     int i,loc,item;   
    struct node *ptr, *temp;  
    ptr = (struct node *) malloc (sizeof(struct node));  
    if(ptr == NULL)  
    {  
        printf("\nOVERFLOW");  
    }  
    else  
    {  
       
        ptr->data = val;  
        printf("\nEnter the location after which you want to insert ");  
        scanf("\n%d",&loc);  
        temp=head;  
        for(i=0;i<loc;i++)  
        {  
            temp = temp->next;  
            if(temp == NULL)  
            {  
                printf("\ncan't insert\n");  
                return;  
            }  
          
        }  
        ptr ->next = temp ->next;   
        temp ->next = ptr;   
       
    }  
    
    
    
}
void midDelete()
{
     struct node *ptr,*ptr1;  
    int loc,i;    
    printf("\n Enter the location of the node after which you want to perform deletion \n");  
    scanf("%d",&loc);  
    ptr=head;  
    for(i=0;i<loc;i++)  
    {  
        ptr1 = ptr;       
        ptr = ptr->next;  
              
        if(ptr == NULL)  
        {  
            printf("\nCan't delete");  
            return;  
        }  
    }  
    ptr1 ->next = ptr ->next;  
    free(ptr);  
}
int main()
{
   
insertEnd(10);
insertEnd(20);
insertEnd(30);
insertEnd(40);

firstInsert(50);
display();
firstDelete();
display();
midInsert(60);
display();
midDelete();
display();
}
