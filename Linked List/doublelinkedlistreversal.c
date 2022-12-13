//doubly linked list reversal

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node *reversal(struct node *head)
{
    struct node *currentnode,*nextnode,*temp;
    currentnode=head;
    while(currentnode!=0)
    {   nextnode=currentnode->next;
        currentnode->next=currentnode->prev;
        currentnode->prev=nextnode;
        temp=currentnode;
        currentnode=nextnode;
        
    }
    head=temp;
    temp=head;
while(temp!=0)
{
   printf("%d",temp->data);
   temp=temp->next;}
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
 temp=temp->next;} 
reversal(head);

}