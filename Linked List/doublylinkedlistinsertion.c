//doubly linked list insertion

#include<stdio.h>
#include<stdlib.h>
 struct node *head,*newnode,*temp;
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};

struct node insert_at_beg(int i)
{
    //struct node *newnode,*temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=i;
    
    newnode->next=head;
    newnode->prev=0;
    head->prev=newnode;
    head=newnode;
}

struct node insert_at_end(int i)
{
    //struct node *newnode,*temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=i;
    temp=head;
    while(temp->next!=0){
    temp=temp->next;
}
    newnode->next=0;
    temp->next=newnode;
    newnode->prev=temp;
}


struct node insert_at_pos(int i,int pos)
{
    //struct node *newnode,*temp;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data=i;
    temp=head;
    while(--pos){
    temp=temp->next;
}
   newnode->prev=temp->prev;
   newnode->prev->next=newnode;
   newnode->next=temp;
   temp->prev=newnode;
   //printf("%d",newnode->data);
   
}

int main()
{

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
printf("enter your choice of insertion 1.beginning 2.middle 3.end:");
scanf("%d",&n1);
switch(n1)
{
    case 1:printf("enter element u want to insert:");
           int n2;
           scanf("%d",&n2);
           insert_at_beg(n2);
           break;
    case 2:
           printf("enter element u want to insert:");
           scanf("%d",&n2);
           int pos;
           printf("enter position u want to insert:");
           scanf("%d",&pos);
           insert_at_pos(n2,pos);
           break;
    case 3:printf("enter element u want to insert:");
           //int n2;
           scanf("%d",&n2);
           insert_at_end(n2);
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