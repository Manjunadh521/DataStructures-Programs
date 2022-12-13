//stack using linked list
#include<stdio.h>
#include<stdlib.h>
#define N 5
struct node{
    int data;
    struct node *next;
};
struct node *newnode,*temp;
struct node *push(int i,struct node*head)
{
    
    newnode=(struct node*)malloc(sizeof(struct node));
        newnode->data=i;
        newnode->next=NULL;
    if(head==NULL){
    temp=head=newnode;
    
    }
    else
    {   
        temp=head;
        while(temp->next!=0)  
        temp=temp->next;
        temp->next=newnode;
    }

return head;
}

struct node *reversal(struct node*head)
{ struct node *prevnode,*currentnode,*nextnode;
currentnode=nextnode=head;
prevnode=0;
 while(nextnode!=0)
 {   
     nextnode=nextnode->next;
     currentnode->next=prevnode;
     prevnode=currentnode;
     currentnode=nextnode;
 }
head=prevnode;

 while(head!=0)
    {  
        printf("%d\n",head->data);
        head=head->next;
    }
   

}
int main()
{struct node *head=NULL;
    head=push(10,head);
    head=push(20,head);
    head=push(30,head);
    temp=head;
    while(head!=0)
    {  
        printf("%d\n",head->data);
        head=head->next;
    }
    
    reversal(temp);
}
-------