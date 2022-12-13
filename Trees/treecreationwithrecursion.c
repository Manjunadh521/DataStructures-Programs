//Tree creation using recurssion

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left, * right;
}*head;

struct node* create()
{
    struct node* newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    int n;
    scanf("%d", &n);
    if (n == -1)
    {
        return 0;
    }
    newnode->data = n;
    printf("enter left node data:");
    newnode->left = create();
    printf("enter right child:");
    newnode->right = create();
    return newnode;
}

int main()
{
    struct node* root;
    root = 0;
    root = create();
}