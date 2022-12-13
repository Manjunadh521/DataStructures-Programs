//tree traversl with recurssion

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

struct node* preorder(struct node* root)
{
    if (root == 0)
        return;
    printf("%d", root->data);
    preorder(root->left);
    preorder(root->right);
}
struct node* postorder(struct node* root)
{
    if (root == 0)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d", root->data);
}
struct node* inorder(struct node* root)
{
    if (root == 0)
        return;
    inorder(root->left);
    printf("%d", root->data);
    inorder(root->right);
}

int main()
{
    struct node* root;
    push(4);
    push(3);
    push(7);
    push(10);
    push(-1);
    push(2);
    push(-2);
    root = head;
    printf("preorder is Root/Left/right:\n");
    preorder(root);
    printf("\n");
    root = head;
    printf("postorder is left/right/root:\n");
    postorder(root);
    printf("\n");
    root = head;
    printf("inorder is left/root/right:\n");
    inorder(root);
    return 0;

}