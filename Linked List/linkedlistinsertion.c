
	//Inserting element
	#include<stdio.h>
	#include<stdlib.h>
	 
	struct node
	{
	  int data;
	  struct node *next;
	  
	};
	 
	 
	int main()
	{
	    struct node *head,*newnode,*temp;
	    int choice,count=0;
	    
	    head=0;
	    while(choice){
	    newnode=(struct node*)malloc(sizeof(struct node));
	    printf("Enter you data:");
	    scanf("%d",&newnode->data);
	    newnode->next=0;
	    if(head==0)
	    {  
	        head=newnode;
	        temp=newnode;
	 
	    }
	    else
	    {
	        temp->next=newnode;
	        temp=newnode;
	        
	    }
	     printf("Enter your choice 0 if you want to exit input:");
	     scanf("%d",&choice);
	    
	    }
	    
	    temp=head;
	 
	    while(temp!=0)
	    {   
	        printf("%d",temp->data);
	        temp=temp->next;
	        count++;
	    }
	    
	    temp=head;
	    int pos;
	    printf("Enter 1 to insert data in first place:");
	    scanf("%d",&pos);
	    
	    newnode=(struct node*)malloc(sizeof(struct node));
	    printf("Enter your data:");
	    scanf("%d",&newnode->data);
	    if(pos==1)
	    {
	        head=newnode;
	        newnode->next=temp;
	        temp=head;
	        while(temp!=0)
	    {   
	        printf("%d",temp->data);
	        temp=temp->next;
	    }
	    }
	    else if(pos<count&&pos!=1)
	    {
	        for(int i=1;i<pos-1;i++)
	        {
	            temp=temp->next;
	        }
	        newnode->next=temp->next;
	        temp->next=newnode;
	        temp=head;
	        while(temp!=0)
	    {   
	        printf("%d",temp->data);
	        temp=temp->next;
	    }}
	    else
	    { 
	    newnode->next=0;
	    while(temp->next!=0)
	    {   
	        temp=temp->next;
	    }
	        temp->next=newnode;
	        temp=head;
	    while(temp!=0)
	    {   
	        printf("%d",temp->data);
	        temp=temp->next;
	    }
	    
	    }
		    
	}
