//Circular doubly linked list deletion
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *delete_at_beg(struct node *head)
{  struct node *newnode,*temp;
    temp=head;
    head=head->next;
    head->prev=temp->prev;
    temp->prev->next=head;
    //head=temp;
    free(temp);
    return head;
}

struct node *delete_at_end(struct node *head)
{ struct node *temp;
    temp=head;
    while(temp!=head->prev)
    {
        temp=temp->next;
    }

    head->prev=temp->prev;
    temp->prev->next=head;
    free(temp);
    return head;
}


struct node *delete_at_pos(int pos,struct node *head)
{
     struct node *temp,*temp1;
    temp=head;
    while(--pos)
    {
        temp=temp->next;
    }
    temp1=temp->next;
    temp->next->next->prev=temp;
    temp->next=temp->next->next;
    free(temp1);
   
   //return head;
}
int main()
{ struct node *temp1;
  struct node *head,*newnode,*temp;

  int n;
  printf("enter size u want to create");
  scanf("%d",&n);
  while(n)
  {
  newnode = (struct node *)malloc(sizeof(struct node));
  scanf("%d",&newnode->data);
 
  newnode->next=0;
  newnode->prev=0;
  if(head==0)
  {
      head=temp=newnode;
      head->next=head;
      head->prev=head;
      
  }
  else 
  {
      temp->next=newnode;
      newnode->prev=temp;
      newnode->next=head;
      head->prev=newnode;
      temp=newnode;
  }
  n--;
}
temp1=head;
while(temp1!=temp)
{ 
 printf("%d",temp1->data);
 temp1=temp1->next;}
 printf("%d",temp1->data);
 int n1;
 printf("enter your choice of delete 1.beginning 2.middle 3.end:");
scanf("%d",&n1);
switch(n1)
{
    case 1:head=delete_at_beg(head);
           break;
    case 2:printf("enter position u want to delete:");
           int pos;
           
           scanf("%d",&pos);
           delete_at_pos(pos-1,head);
           break;
    case 3: temp=temp->prev;
    delete_at_end(head);
           break;
    default: break;
}

temp1=head;
while(temp1!=temp)
{ 
    
 printf("%d",temp1->data);
 temp1=temp1->next;}
 printf("%d",temp1->data);

}