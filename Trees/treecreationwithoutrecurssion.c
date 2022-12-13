//tree without recurssion
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node* left;
    struct node* right;
}*head;

struct node* push(int i)
{
    struct node* newnode, * cnode, * pnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data = i;
    newnode->left = NULL;
    newnode->right = NULL;
    if (head == NULL)
    {
        cnode = pnode = head = newnode;

    }
    else
    {
        cnode = head;
        while (cnode != 0)
        {
            pnode = cnode;
            if ((newnode->data) < (cnode->data))
            {
                cnode = cnode->left;
            }
            else
            {
                cnode = cnode->right;
            }
            if ((newnode->data) > (pnode->data))
            {
                if (cnode == NULL)
                    pnode->right = newnode;
            }
            else
            {
                if (cnode == NULL)
                    pnode->left = newnode;
            }


        }

    }
}
int main()
{
    push(4);
    push(3);
    push(7);
    push(10);
    push(-1);
    push(2);
    push(-2);
    return 0;

}