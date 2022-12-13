//Circular queue using array

//queue using array

#include<stdio.h>
#include<stdlib.h>
#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int i)
{
    if ((front == -1) && (rear == -1))
    {
        front = 0;
        rear = 0;
        queue[rear] = i;
    }
    else if (((rear + 1) % N) == front)
    {
        printf("queue is full");
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = i;
    }
}

void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("underflow");
    }
    else if (front == rear)
    {
        front = -1;
        rear = -1;
    }
    else
        front = (front + 1) % N;
}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else
    {
        for (int i = front; i != rear + 1; i)
        {
            printf("%d", queue[i]);
            i = (i + 1) % N;
        }
    }
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
    enqueue(5);

    display();
}