//queue using linked list
#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    
};
struct node *front=0;
struct node *rear=0;

void enqueue(int i)
{
   struct node *newnode;
   newnode=(struct node*)malloc(sizeof(struct node));
   newnode->data=i;
   if(front==0 && rear==0)
   {
       front=rear=newnode;
   }
   else
   {
       rear->next=newnode;
       rear=newnode;
       
   }
}

void dequeue()
{ struct node *temp=front;
    if(front ==0 && rear==0)
{
    printf("underflow");
}
else 
{
    front=front->next;
    free(temp);
}

}
void display()
{
    if(front==0 && rear ==0)
    {
        printf("queue is empty");
    }
    else
    {
        while(front!=0)
        {printf("%d",front->data);
            front=front->next;
        }
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    //enqueue(50);
    dequeue();
    dequeue();
    
    display();
}