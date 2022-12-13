//implementation of queue using stack
#include <stdio.h>
#include<stdlib.h>
#define N 5
int S1[N],S2[N];
int top1=-1,top2=-1;

int enqueue(int n)
{
    if(top1==N-1)
    {
        printf("overflow");
    }
    else
    {
        top1++;
        S1[top1]=n;
    }
    
}
int dequeue( )
{
    for(int i=top1;i>=0;i--)
    {top2++;
    S2[top2]=S1[i];
    }
    top2=top2-1;
    top1=0;
    for(int i=top2;i>=0;i--)
    {
    S1[top1]=S2[i];
    top1++;
    }
    top1=top2;
    top2=-1;
}
int main()
{
    enqueue(5);
    enqueue(15);
    enqueue(25);
    enqueue(35);
    enqueue(45);
    
    dequeue();
    dequeue();
    
    
    for(int i=0;i<=top1;i++)
    {  //printf("%d",top1);
        printf("%d\n",S1[i]);
    }
}
