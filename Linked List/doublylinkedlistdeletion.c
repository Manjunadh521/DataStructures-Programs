//doubly linked list deletion
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *delete_at_beg(struct node *head)
{
    struct node *temp;
    temp=head;
    head=temp->next;
    head->prev=0;
    free(temp);
    return head;
}

struct node *delete_at_pos(struct node *head,int i)
{
    struct node *temp,*temp1;
    temp=head;
    while(--i)
    {
        temp=temp->next;
    }
    temp1=temp->next;
    temp->next=temp->next->next;
    temp->next->prev=temp;
   free(temp1);
}
struct node *delete_at_end(struct node *head)
{
    struct node *temp,*temp1;
    temp=head;
    while(temp->next->next!=0)
    {
        temp=temp->next;
    }
    temp1=temp->next;
    temp->next=NULL;

}

int main()
{ struct node *head,*newnode,*temp;

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
      
  }
  else
  {
      temp->next=newnode;
      newnode->prev=temp;
      temp=newnode;
  }

  n--;
}
temp=head;
while(temp!=0)
{
   printf("%d",temp->data);
   temp=temp->next;
}
int n1;
printf("enter your choice of delition 1.beginning 2.middle 3.end:");
scanf("%d",&n1);
switch(n1)
{
    case 1:
           head=delete_at_beg(head);
           break;
    case 2:
           
           printf("enter position u want to delete:");
           int pos;
           scanf("%d",&pos);
           delete_at_pos(head,pos-1);
           break;
    case 3:
           delete_at_end(head);
           break;
    default: break;
}
temp=head;
while(temp!=0)
{ //printf("hi");
   printf("%d",temp->data);
   temp=temp->next;
}

}