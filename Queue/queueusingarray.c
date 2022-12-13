#include<stdio.h>
#include<stdlib.h>
#define N 5

int queue[N];
int front = -1;
int rear = -1;

void enqueue(int i)
{
    if (rear == N - 1)
    {
        printf("overflow");
    }
    else if ((front == -1) && (rear == -1))
    {
        front = 0;
        rear = 0;
        queue[rear] = i;
    }
    else
    {
        rear++;
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
        front++;

}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("queue is empty");
    }
    else
    {
        for (int i = front; i <= rear; i++)
            printf("%d", queue[i]);
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

    display();
}