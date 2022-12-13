//circular singly linked list creation
#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};


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
  if(head==0)
  {
      head=temp=newnode;
  }
  else 
  {
      temp->next=newnode;
      newnode->next=head;
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
}
