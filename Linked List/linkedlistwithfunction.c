//linked list using function
#include<stdio.h>
#include<stdlib.h>
#define N 5
struct node{
    int data;
    struct node *next;
};

struct node *push(int i,struct node*head)
{
    struct node *newnode,*temp;
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

int main()
{struct node *head=NULL;
    head=push(10,head);
    head=push(20,head);
    head=push(30,head);

    while(head!=0)
    {  
        printf("%d",head->data);
        head=head->next;
    }
    
}