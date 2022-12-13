#include<stdio.h>
#include<stdlib.h>

struct node
{
	  int data;
	  struct node* next;

		};


int main()
{
	struct node* head, * newnode, * temp;
	int choice;
	
	    head = 0;
	while (choice) {
		    newnode = (struct node*)malloc(sizeof(struct node));
		    printf("Enter you data:");
		    scanf("%d", &newnode->data);
		    newnode->next = 0;
		    if (head == 0)
			    {
			        head = newnode;
			        temp = newnode;
		
				    }
		    else
			    {
		        temp->next = newnode;
		        temp = newnode;
		
			    }
		 printf("Enter your choice enter 0 if you want to exit input:");
		 scanf("%d", &choice);
		
		
	}
	
		    temp = head;
	
	    while (temp != 0)
	    {
	        printf("%d", temp->data);
	        temp = temp->next;
	
		    }
	
	    temp = head;
	printf("Enter your choice of deletion");
	scanf("%d", &choice);
	if (choice == 1)
		    {
		        head = temp->next;
		        temp = head;
		         while (temp != 0)
			    {
			        printf("%d", temp->data);
			        temp = temp->next;
		
			    }}
	  else if (choice == 2)
	    {struct node* prev;
	  while (temp->next != 0)
	    {   prev = temp;
	      temp = temp->next;
	  }
	  prev->next = 0;
	  free(temp);
	  temp = head;
	  while (temp != 0)
	    {
	        printf("%d", temp->data);
	        temp = temp->next;
	
			    }
	
	    }
	 else {
		int pos, i = 1;
		 struct node* prev;
		     printf("Enter position you want to delete:");
		     scanf("%d", &pos);
		     while (i < pos)
		       {    prev = temp;
		         temp = temp->next;
		         i++;
		     }
		     prev->next = temp->next;
		     free(temp);
		     temp = head;
		      while (temp != 0)
		    {
		        printf("%d", temp->data);
		        temp = temp->next;
		
				    }
		
		
	}
	}
