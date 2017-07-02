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
void detect(node* head)
{
	int count=0;
	node* slow=head;
	node* fast=head;
	while(slow!=NULL&&fast!=NULL&&fast->next!=NULL)
	{
		slow=slow->next;
		fast=fast->next->next;
		if(slow==fast)
		{
			printf("loop detected\n");
			return;
		
		}
		
	}
	
}
int main()
{
	node* head= NULL;
	head=insert(head,9);
	head=insert(head,3);
	head=insert(head,5);
	head=insert(head,8);
	display(head);
	head->next->next=head;
	detect(head);
	return 0;
	
	
}

















