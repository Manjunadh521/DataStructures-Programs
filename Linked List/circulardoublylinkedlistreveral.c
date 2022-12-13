//Circular doubly linked list reversal

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *reversal(struct node *head,struct node *temp)
{
    struct node *currentnode,*nextnode;
    currentnode=head;
    while(currentnode!=temp)
    {
        nextnode=currentnode->next;
        currentnode->next=currentnode->prev;
        currentnode->prev=nextnode;
        currentnode=nextnode;
    }
    currentnode->next=currentnode->prev;
    currentnode->prev=head;
    head=temp;
    return head;
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

 head=reversal(head,temp);
 temp1=head;
while(temp1!=temp->prev)
{ 
 printf("%d",temp1->data);
 temp1=temp1->next;}
 printf("%d",temp1->data);
}