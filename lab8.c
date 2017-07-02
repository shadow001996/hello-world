#include<stdio.h>
#include<stdlib.h>
typedef struct node{
	int data;
	struct node* next;
}node;
node* insert(node* head,int item)
{
	node* newnode= (node*)malloc(sizeof(struct node));
	if(head==NULL)
	{
		newnode->data=item;
		newnode->next=NULL;
		head=newnode;
	}
	else{
	
	newnode->data=item;
	newnode->next=head;
	head=newnode;
}
	return head;
	
}
void display(node* head)
{
	node* temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		printf("\n");
		temp=temp->next;
	}
}
node* reverse(node* head)
{
	
	node* prev=NULL;
	node* current=head;
	node* next;
	while(current!=NULL)
	{
		next=current->next;
		current->next=prev;
		prev=current;
		current=next;
	
	}
	return prev;
}
int main()
{
	node* head=NULL;
	
	head=insert(head,5);
		head=insert(head,6);
			head=insert(head,9);
				head=insert(head,7);
					head=insert(head,8);
					display(head);
					printf("after reversing the linked list");
					printf("\n");
					head= reverse(head);
					display(head);
					
}









