//doubly circular linked list insertion
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *insert_at_beg(int i,struct node *head)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=i;
    newnode->next=head;
    newnode->prev=head->prev;
    newnode->next->prev=newnode;
    head=newnode;
    return head;
}

struct node *insert_at_end(int i, struct node *head)
{ struct node *newnode,*temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=i;
    temp=head;
    while(temp!=head->prev)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
    newnode->next=head;
    head->prev=newnode;
    return head;
}


struct node *insert_at_pos(int i,int pos,struct node *head)
{
     struct node *newnode,*temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=i;
    temp=head;
    while(--pos)
    {
        temp=temp->next;
    }
    
   newnode->next=temp->next;
   newnode->prev=temp;
   temp->next=newnode;
   
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
 printf("enter your choice of insertion 1.beginning 2.middle 3.end:");
scanf("%d",&n1);
switch(n1)
{
    case 1:printf("enter element u want to insert:");
           int n2;
           scanf("%d",&n2);
           head=insert_at_beg(n2,head);
           break;
    case 2:
           printf("enter element u want to insert:");
           scanf("%d",&n2);
           int pos;
           printf("enter position u want to insert:");
           scanf("%d",&pos);
           insert_at_pos(n2,pos-1,head);
           break;
    case 3:printf("enter element u want to insert:");
           //int n2;
           scanf("%d",&n2);
           insert_at_end(n2,head);
           temp=temp->next;
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