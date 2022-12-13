//stack
#include<stdio.h>
#define N 5
int stack[N];
int top=-1;
int push(int a)
{ 
    if(top==N-1)
    {
        printf("Overflow");
        
    }
    else
    {top++;
    stack[top]=a;
}}
int pop()
{
    if(top==-1)
    printf("underflow");
    else
    {
        top--;
    }
}
int peek()
{
    if(top==-1)
    printf("underflow");
    else
    printf("%d\n",stack[top]);
}
int main()
{
push(10);
push(20);push(30);
pop();
peek();
for(int i=0;i<=top;i++)
printf("%d\n",stack[i]);
}
