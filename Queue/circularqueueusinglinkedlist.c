//Circular queue using linked list
#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node* next;

};
struct node* front = 0;
struct node* rear = 0;

void enqueue(int i)
{
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = i;
    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
        rear->next = front;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
        rear->next = front;

    }
}

void dequeue()
{
    struct node* temp = front;
    if (front == 0 && rear == 0)
    {
        printf("underflow");
    }
    else if (front == rear)
    {
        front = 0; rear = 0;
        free(temp);
    }
    else
    {
        front = front->next;
        rear->next = front;
        free(temp);

    }

}
void display()
{
    struct node* temp = front;
    if (front == 0 && rear == 0)
    {
        printf("queue is empty");
    }
    else
    {
        while (temp != rear)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }printf("%d\n", temp->data);
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    dequeue();
    dequeue();

    display();
}